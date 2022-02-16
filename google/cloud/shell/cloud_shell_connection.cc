// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/shell/v1/cloudshell.proto

#include "google/cloud/shell/cloud_shell_connection.h"
#include "google/cloud/shell/cloud_shell_options.h"
#include "google/cloud/shell/internal/cloud_shell_connection_impl.h"
#include "google/cloud/shell/internal/cloud_shell_option_defaults.h"
#include "google/cloud/shell/internal/cloud_shell_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace shell {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudShellServiceConnection::~CloudShellServiceConnection() = default;

StatusOr<google::cloud::shell::v1::Environment>
CloudShellServiceConnection::GetEnvironment(
    google::cloud::shell::v1::GetEnvironmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
CloudShellServiceConnection::StartEnvironment(
    google::cloud::shell::v1::StartEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
CloudShellServiceConnection::AuthorizeEnvironment(
    google::cloud::shell::v1::AuthorizeEnvironmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>>
CloudShellServiceConnection::AddPublicKey(
    google::cloud::shell::v1::AddPublicKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
CloudShellServiceConnection::RemovePublicKey(
    google::cloud::shell::v1::RemovePublicKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<CloudShellServiceConnection> MakeCloudShellServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 CloudShellServicePolicyOptionList>(options,
                                                                    __func__);
  options = shell_internal::CloudShellServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = shell_internal::CreateDefaultCloudShellServiceStub(
      background->cq(), options);
  return std::make_shared<shell_internal::CloudShellServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace shell_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<shell::CloudShellServiceConnection>
MakeCloudShellServiceConnection(std::shared_ptr<CloudShellServiceStub> stub,
                                Options options) {
  options = CloudShellServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<shell_internal::CloudShellServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_internal
}  // namespace cloud
}  // namespace google
