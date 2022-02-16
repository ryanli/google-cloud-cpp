// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/instance_admin_connection.h"
#include "google/cloud/spanner/admin/instance_admin_options.h"
#include "google/cloud/spanner/admin/internal/instance_admin_connection_impl.h"
#include "google/cloud/spanner/admin/internal/instance_admin_option_defaults.h"
#include "google/cloud/spanner/admin/internal/instance_admin_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminConnection::~InstanceAdminConnection() = default;

StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
    InstanceAdminConnection::ListInstanceConfigs(
        google::spanner::admin::instance::v1::
            ListInstanceConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::spanner::admin::instance::v1::InstanceConfig>>();
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminConnection::GetInstanceConfig(
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::spanner::admin::instance::v1::Instance>
    InstanceAdminConnection::ListInstances(
        google::spanner::admin::instance::v1::
            ListInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::spanner::admin::instance::v1::Instance>>();
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminConnection::GetInstance(
    google::spanner::admin::instance::v1::GetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminConnection::CreateInstance(
    google::spanner::admin::instance::v1::CreateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::spanner::admin::instance::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminConnection::UpdateInstance(
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::spanner::admin::instance::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

Status InstanceAdminConnection::DeleteInstance(
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> InstanceAdminConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> InstanceAdminConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<InstanceAdminConnection> MakeInstanceAdminConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 InstanceAdminPolicyOptionList>(options,
                                                                __func__);
  options =
      spanner_admin_internal::InstanceAdminDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = spanner_admin_internal::CreateDefaultInstanceAdminStub(
      background->cq(), options);
  return std::make_shared<spanner_admin_internal::InstanceAdminConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<spanner_admin::InstanceAdminConnection>
MakeInstanceAdminConnection(std::shared_ptr<InstanceAdminStub> stub,
                            Options options) {
  options = InstanceAdminDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<spanner_admin_internal::InstanceAdminConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
