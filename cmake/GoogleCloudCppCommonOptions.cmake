# ~~~
# Copyright 2020 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

option(GOOGLE_CLOUD_CPP_ENABLE_WERROR
       "If set, compiles the library with -Werror and /WX (MSVC)." OFF)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_WERROR)

# Find out what flags turn on all available warnings and turn those warnings
# into errors.
include(CheckCXXCompilerFlag)
check_cxx_compiler_flag(-Wall GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WALL)
check_cxx_compiler_flag(-Wextra GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WEXTRA)
check_cxx_compiler_flag(-Wconversion
                        GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WCONVERSION)
check_cxx_compiler_flag(-Wno-sign-conversion
                        GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WNO_SIGN_CONVERSION)
check_cxx_compiler_flag(-Werror GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WERROR)

#[=======================================================================[.rst:
google_cloud_cpp_add_common_options(target [NO_WARNINGS])
---------------------------------------------------------

Set the compilation options for the ``google-cloud-cpp`` targets.

There are a number of compiler options and features we want to set on all our
targets. This function sets them.

- NO_WARNINGS: if present, skip the options to increase the warning level.
  We compile most of our targets with increased warning levels, and in
  development we may even enable ``-Werror`` (``/WX`` with MSVC). The exceptions
  are targets that contain code generated by Protobuf or gRPC. We have no
  control over this code, and therefore any warnings are not actionable.
#]=======================================================================]
function (google_cloud_cpp_add_common_options target)
    # Parse the optional arguments.
    cmake_parse_arguments(_opt "NO_WARNINGS" "" "" ${ARGN})

    # Require C++ >= 14.  Note that this is a *minimum* requirement. It is still
    # possible to compile the library (and its dependencies) with C++17 or
    # higher.
    target_compile_features(${target} PUBLIC cxx_std_14)

    if (MSVC)
        target_compile_options(${target} PRIVATE "/bigobj")
        # Disable warnings in files included via #include <...>. This is mostly
        # because Protobuf and gRPC-generated headers produce too many
        # non-actionable warnings, even with the default warning level. This is
        # also true for Abseil, but for complicated reasons it is not possible
        # to say  #include <absl/...> at the moment. We use different
        # workarounds in this case.
        target_compile_options(${target} PRIVATE "/experimental:external")
        target_compile_options(${target} PRIVATE "/external:W0")
        target_compile_options(${target} PRIVATE "/external:anglebrackets")
        if (_opt_NO_WARNINGS)
            return()
        endif ()
        target_compile_options(${target} PRIVATE "/W3")
        if (GOOGLE_CLOUD_CPP_ENABLE_WERROR)
            target_compile_options(${target} PRIVATE "/WX")
        endif ()
        return()
    endif ()

    if (_opt_NO_WARNINGS)
        set_target_properties(${libname} PROPERTIES CXX_CLANG_TIDY "")
        return()
    endif ()
    if (GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WALL)
        target_compile_options(${target} PRIVATE "-Wall")
    endif ()
    if (GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WEXTRA)
        target_compile_options(${target} PRIVATE "-Wextra")
    endif ()
    if (GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WCONVERSION)
        target_compile_options(${target} PRIVATE "-Wconversion")
    endif ()
    if (GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WNO_SIGN_CONVERSION)
        target_compile_options(${target} PRIVATE "-Wno-sign-conversion")
    endif ()
    if (GOOGLE_CLOUD_CPP_COMPILER_SUPPORTS_WERROR
        AND GOOGLE_CLOUD_CPP_ENABLE_WERROR)
        target_compile_options(${target} PRIVATE "-Werror")
    endif ()
endfunction ()
