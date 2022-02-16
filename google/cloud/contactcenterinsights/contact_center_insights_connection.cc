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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#include "google/cloud/contactcenterinsights/contact_center_insights_connection.h"
#include "google/cloud/contactcenterinsights/contact_center_insights_options.h"
#include "google/cloud/contactcenterinsights/internal/contact_center_insights_connection_impl.h"
#include "google/cloud/contactcenterinsights/internal/contact_center_insights_option_defaults.h"
#include "google/cloud/contactcenterinsights/internal/contact_center_insights_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace contactcenterinsights {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContactCenterInsightsConnection::~ContactCenterInsightsConnection() = default;

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsConnection::CreateConversation(
    google::cloud::contactcenterinsights::v1::
        CreateConversationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsConnection::UpdateConversation(
    google::cloud::contactcenterinsights::v1::
        UpdateConversationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsConnection::GetConversation(
    google::cloud::contactcenterinsights::v1::GetConversationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::contactcenterinsights::v1::Conversation>
    ContactCenterInsightsConnection::ListConversations(
        google::cloud::contactcenterinsights::v1::
            ListConversationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::contactcenterinsights::v1::Conversation>>();
}

Status ContactCenterInsightsConnection::DeleteConversation(
    google::cloud::contactcenterinsights::v1::
        DeleteConversationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::contactcenterinsights::v1::Analysis>>
ContactCenterInsightsConnection::CreateAnalysis(
    google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::contactcenterinsights::v1::Analysis>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::contactcenterinsights::v1::Analysis>
ContactCenterInsightsConnection::GetAnalysis(
    google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::contactcenterinsights::v1::Analysis>
    ContactCenterInsightsConnection::ListAnalyses(
        google::cloud::contactcenterinsights::v1::
            ListAnalysesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::contactcenterinsights::v1::Analysis>>();
}

Status ContactCenterInsightsConnection::DeleteAnalysis(
    google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::ExportInsightsDataResponse>>
ContactCenterInsightsConnection::ExportInsightsData(
    google::cloud::contactcenterinsights::v1::
        ExportInsightsDataRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::contactcenterinsights::v1::ExportInsightsDataResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>>
ContactCenterInsightsConnection::CreateIssueModel(
    google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsConnection::UpdateIssueModel(
    google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsConnection::GetIssueModel(
    google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
ContactCenterInsightsConnection::ListIssueModels(
    google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::DeleteIssueModelMetadata>>
ContactCenterInsightsConnection::DeleteIssueModel(
    google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::contactcenterinsights::v1::DeleteIssueModelMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::DeployIssueModelResponse>>
ContactCenterInsightsConnection::DeployIssueModel(
    google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::contactcenterinsights::v1::DeployIssueModelResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::UndeployIssueModelResponse>>
ContactCenterInsightsConnection::UndeployIssueModel(
    google::cloud::contactcenterinsights::v1::
        UndeployIssueModelRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::contactcenterinsights::v1::UndeployIssueModelResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsConnection::GetIssue(
    google::cloud::contactcenterinsights::v1::GetIssueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
ContactCenterInsightsConnection::ListIssues(
    google::cloud::contactcenterinsights::v1::ListIssuesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsConnection::UpdateIssue(
    google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<
    google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse>
ContactCenterInsightsConnection::CalculateIssueModelStats(
    google::cloud::contactcenterinsights::v1::
        CalculateIssueModelStatsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsConnection::CreatePhraseMatcher(
    google::cloud::contactcenterinsights::v1::
        CreatePhraseMatcherRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsConnection::GetPhraseMatcher(
    google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::contactcenterinsights::v1::PhraseMatcher>
    ContactCenterInsightsConnection::ListPhraseMatchers(
        google::cloud::contactcenterinsights::v1::
            ListPhraseMatchersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::contactcenterinsights::v1::PhraseMatcher>>();
}

Status ContactCenterInsightsConnection::DeletePhraseMatcher(
    google::cloud::contactcenterinsights::v1::
        DeletePhraseMatcherRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsConnection::UpdatePhraseMatcher(
    google::cloud::contactcenterinsights::v1::
        UpdatePhraseMatcherRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
ContactCenterInsightsConnection::CalculateStats(
    google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsConnection::GetSettings(
    google::cloud::contactcenterinsights::v1::GetSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsConnection::UpdateSettings(
    google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsConnection::CreateView(
    google::cloud::contactcenterinsights::v1::CreateViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsConnection::GetView(
    google::cloud::contactcenterinsights::v1::GetViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::contactcenterinsights::v1::View>
    ContactCenterInsightsConnection::ListViews(
        google::cloud::contactcenterinsights::v1::
            ListViewsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::contactcenterinsights::v1::View>>();
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsConnection::UpdateView(
    google::cloud::contactcenterinsights::v1::UpdateViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ContactCenterInsightsConnection::DeleteView(
    google::cloud::contactcenterinsights::v1::DeleteViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ContactCenterInsightsConnection>
MakeContactCenterInsightsConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ContactCenterInsightsPolicyOptionList>(
      options, __func__);
  options = contactcenterinsights_internal::ContactCenterInsightsDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      contactcenterinsights_internal::CreateDefaultContactCenterInsightsStub(
          background->cq(), options);
  return std::make_shared<
      contactcenterinsights_internal::ContactCenterInsightsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace contactcenterinsights_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<contactcenterinsights::ContactCenterInsightsConnection>
MakeContactCenterInsightsConnection(
    std::shared_ptr<ContactCenterInsightsStub> stub, Options options) {
  options = ContactCenterInsightsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      contactcenterinsights_internal::ContactCenterInsightsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights_internal
}  // namespace cloud
}  // namespace google
