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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#include "google/cloud/securitycenter/security_center_connection.h"
#include "google/cloud/securitycenter/internal/security_center_connection_impl.h"
#include "google/cloud/securitycenter/internal/security_center_option_defaults.h"
#include "google/cloud/securitycenter/internal/security_center_stub_factory.h"
#include "google/cloud/securitycenter/security_center_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterConnection::~SecurityCenterConnection() = default;

future<StatusOr<google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>
SecurityCenterConnection::BulkMuteFindings(
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterConnection::CreateSource(
    google::cloud::securitycenter::v1::CreateSourceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterConnection::CreateFinding(
    google::cloud::securitycenter::v1::CreateFindingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterConnection::CreateMuteConfig(
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterConnection::CreateNotificationConfig(
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SecurityCenterConnection::DeleteMuteConfig(
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SecurityCenterConnection::DeleteNotificationConfig(
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> SecurityCenterConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterConnection::GetMuteConfig(
    google::cloud::securitycenter::v1::GetMuteConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterConnection::GetNotificationConfig(
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterConnection::GetOrganizationSettings(
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterConnection::GetSource(
    google::cloud::securitycenter::v1::GetSourceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::securitycenter::v1::GroupResult>
    SecurityCenterConnection::GroupAssets(
        google::cloud::securitycenter::v1::
            GroupAssetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securitycenter::v1::GroupResult>>();
}

StreamRange<google::cloud::securitycenter::v1::GroupResult>
    SecurityCenterConnection::GroupFindings(
        google::cloud::securitycenter::v1::
            GroupFindingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securitycenter::v1::GroupResult>>();
}

StreamRange<
    google::cloud::securitycenter::v1::ListAssetsResponse::ListAssetsResult>
    SecurityCenterConnection::ListAssets(
        google::cloud::securitycenter::v1::
            ListAssetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securitycenter::v1::ListAssetsResponse::
                      ListAssetsResult>>();
}

StreamRange<
    google::cloud::securitycenter::v1::ListFindingsResponse::ListFindingsResult>
    SecurityCenterConnection::ListFindings(
        google::cloud::securitycenter::v1::
            ListFindingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securitycenter::v1::ListFindingsResponse::
                      ListFindingsResult>>();
}

StreamRange<google::cloud::securitycenter::v1::MuteConfig>
    SecurityCenterConnection::ListMuteConfigs(
        google::cloud::securitycenter::v1::
            ListMuteConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securitycenter::v1::MuteConfig>>();
}

StreamRange<google::cloud::securitycenter::v1::NotificationConfig>
    SecurityCenterConnection::ListNotificationConfigs(
        google::cloud::securitycenter::v1::
            ListNotificationConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securitycenter::v1::NotificationConfig>>();
}

StreamRange<google::cloud::securitycenter::v1::Source>
    SecurityCenterConnection::ListSources(
        google::cloud::securitycenter::v1::
            ListSourcesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securitycenter::v1::Source>>();
}

future<StatusOr<google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>
SecurityCenterConnection::RunAssetDiscovery(
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterConnection::SetFindingState(
    google::cloud::securitycenter::v1::SetFindingStateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterConnection::SetMute(
    google::cloud::securitycenter::v1::SetMuteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> SecurityCenterConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterConnection::UpdateExternalSystem(
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterConnection::UpdateFinding(
    google::cloud::securitycenter::v1::UpdateFindingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterConnection::UpdateMuteConfig(
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterConnection::UpdateNotificationConfig(
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterConnection::UpdateOrganizationSettings(
    google::cloud::securitycenter::v1::
        UpdateOrganizationSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterConnection::UpdateSource(
    google::cloud::securitycenter::v1::UpdateSourceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterConnection::UpdateSecurityMarks(
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<SecurityCenterConnection> MakeSecurityCenterConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 SecurityCenterPolicyOptionList>(options,
                                                                 __func__);
  options =
      securitycenter_internal::SecurityCenterDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = securitycenter_internal::CreateDefaultSecurityCenterStub(
      background->cq(), options);
  return std::make_shared<
      securitycenter_internal::SecurityCenterConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace securitycenter_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<securitycenter::SecurityCenterConnection>
MakeSecurityCenterConnection(std::shared_ptr<SecurityCenterStub> stub,
                             Options options) {
  options = SecurityCenterDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      securitycenter_internal::SecurityCenterConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_internal
}  // namespace cloud
}  // namespace google
