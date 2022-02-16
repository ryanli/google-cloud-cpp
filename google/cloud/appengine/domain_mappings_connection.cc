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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/domain_mappings_connection.h"
#include "google/cloud/appengine/domain_mappings_options.h"
#include "google/cloud/appengine/internal/domain_mappings_connection_impl.h"
#include "google/cloud/appengine/internal/domain_mappings_option_defaults.h"
#include "google/cloud/appengine/internal/domain_mappings_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DomainMappingsConnection::~DomainMappingsConnection() = default;

StreamRange<google::appengine::v1::DomainMapping>
    DomainMappingsConnection::ListDomainMappings(
        google::appengine::v1::
            ListDomainMappingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::appengine::v1::DomainMapping>>();
}

StatusOr<google::appengine::v1::DomainMapping>
DomainMappingsConnection::GetDomainMapping(
    google::appengine::v1::GetDomainMappingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::appengine::v1::DomainMapping>>
DomainMappingsConnection::CreateDomainMapping(
    google::appengine::v1::CreateDomainMappingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::DomainMapping>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::DomainMapping>>
DomainMappingsConnection::UpdateDomainMapping(
    google::appengine::v1::UpdateDomainMappingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::DomainMapping>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
DomainMappingsConnection::DeleteDomainMapping(
    google::appengine::v1::DeleteDomainMappingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::OperationMetadataV1>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<DomainMappingsConnection> MakeDomainMappingsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 DomainMappingsPolicyOptionList>(options,
                                                                 __func__);
  options =
      appengine_internal::DomainMappingsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = appengine_internal::CreateDefaultDomainMappingsStub(
      background->cq(), options);
  return std::make_shared<appengine_internal::DomainMappingsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<appengine::DomainMappingsConnection>
MakeDomainMappingsConnection(std::shared_ptr<DomainMappingsStub> stub,
                             Options options) {
  options = DomainMappingsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<appengine_internal::DomainMappingsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
