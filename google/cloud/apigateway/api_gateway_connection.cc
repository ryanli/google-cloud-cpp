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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#include "google/cloud/apigateway/api_gateway_connection.h"
#include "google/cloud/apigateway/api_gateway_options.h"
#include "google/cloud/apigateway/internal/api_gateway_connection_impl.h"
#include "google/cloud/apigateway/internal/api_gateway_option_defaults.h"
#include "google/cloud/apigateway/internal/api_gateway_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigateway {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApiGatewayServiceConnection::~ApiGatewayServiceConnection() = default;

StreamRange<google::cloud::apigateway::v1::Gateway>
    ApiGatewayServiceConnection::ListGateways(
        google::cloud::apigateway::v1::
            ListGatewaysRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::apigateway::v1::Gateway>>();
}

StatusOr<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceConnection::GetGateway(
    google::cloud::apigateway::v1::GetGatewayRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::apigateway::v1::Gateway>>
ApiGatewayServiceConnection::CreateGateway(
    google::cloud::apigateway::v1::CreateGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::Gateway>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::Gateway>>
ApiGatewayServiceConnection::UpdateGateway(
    google::cloud::apigateway::v1::UpdateGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::Gateway>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnection::DeleteGateway(
    google::cloud::apigateway::v1::DeleteGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::apigateway::v1::Api>
    ApiGatewayServiceConnection::ListApis(
        google::cloud::apigateway::v1::
            ListApisRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::apigateway::v1::Api>>();
}

StatusOr<google::cloud::apigateway::v1::Api>
ApiGatewayServiceConnection::GetApi(
    google::cloud::apigateway::v1::GetApiRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::apigateway::v1::Api>>
ApiGatewayServiceConnection::CreateApi(
    google::cloud::apigateway::v1::CreateApiRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::Api>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::Api>>
ApiGatewayServiceConnection::UpdateApi(
    google::cloud::apigateway::v1::UpdateApiRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::Api>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnection::DeleteApi(
    google::cloud::apigateway::v1::DeleteApiRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::apigateway::v1::ApiConfig>
    ApiGatewayServiceConnection::ListApiConfigs(
        google::cloud::apigateway::v1::
            ListApiConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::apigateway::v1::ApiConfig>>();
}

StatusOr<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceConnection::GetApiConfig(
    google::cloud::apigateway::v1::GetApiConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
ApiGatewayServiceConnection::CreateApiConfig(
    google::cloud::apigateway::v1::CreateApiConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::ApiConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
ApiGatewayServiceConnection::UpdateApiConfig(
    google::cloud::apigateway::v1::UpdateApiConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::ApiConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnection::DeleteApiConfig(
    google::cloud::apigateway::v1::DeleteApiConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::apigateway::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ApiGatewayServiceConnection> MakeApiGatewayServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ApiGatewayServicePolicyOptionList>(options,
                                                                    __func__);
  options =
      apigateway_internal::ApiGatewayServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = apigateway_internal::CreateDefaultApiGatewayServiceStub(
      background->cq(), options);
  return std::make_shared<apigateway_internal::ApiGatewayServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace apigateway_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<apigateway::ApiGatewayServiceConnection>
MakeApiGatewayServiceConnection(std::shared_ptr<ApiGatewayServiceStub> stub,
                                Options options) {
  options = ApiGatewayServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<apigateway_internal::ApiGatewayServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_internal
}  // namespace cloud
}  // namespace google
