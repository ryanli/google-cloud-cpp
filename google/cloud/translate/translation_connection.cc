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
// source: google/cloud/translate/v3/translation_service.proto

#include "google/cloud/translate/translation_connection.h"
#include "google/cloud/translate/internal/translation_connection_impl.h"
#include "google/cloud/translate/internal/translation_option_defaults.h"
#include "google/cloud/translate/internal/translation_stub_factory.h"
#include "google/cloud/translate/translation_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace translate {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceConnection::~TranslationServiceConnection() = default;

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceConnection::TranslateText(
    google::cloud::translation::v3::TranslateTextRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceConnection::DetectLanguage(
    google::cloud::translation::v3::DetectLanguageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceConnection::GetSupportedLanguages(
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceConnection::TranslateDocument(
    google::cloud::translation::v3::TranslateDocumentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
TranslationServiceConnection::BatchTranslateText(
    google::cloud::translation::v3::BatchTranslateTextRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
TranslationServiceConnection::BatchTranslateDocument(
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::translation::v3::Glossary>>
TranslationServiceConnection::CreateGlossary(
    google::cloud::translation::v3::CreateGlossaryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::translation::v3::Glossary>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::translation::v3::Glossary>
    TranslationServiceConnection::ListGlossaries(
        google::cloud::translation::v3::
            ListGlossariesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::translation::v3::Glossary>>();
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceConnection::GetGlossary(
    google::cloud::translation::v3::GetGlossaryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
TranslationServiceConnection::DeleteGlossary(
    google::cloud::translation::v3::DeleteGlossaryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<TranslationServiceConnection> MakeTranslationServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 TranslationServicePolicyOptionList>(options,
                                                                     __func__);
  options =
      translate_internal::TranslationServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = translate_internal::CreateDefaultTranslationServiceStub(
      background->cq(), options);
  return std::make_shared<translate_internal::TranslationServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace translate_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<translate::TranslationServiceConnection>
MakeTranslationServiceConnection(std::shared_ptr<TranslationServiceStub> stub,
                                 Options options) {
  options = TranslationServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<translate_internal::TranslationServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_internal
}  // namespace cloud
}  // namespace google
