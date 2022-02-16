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
// source: google/cloud/gaming/v1/game_server_clusters_service.proto

#include "google/cloud/gameservices/game_server_clusters_connection.h"
#include "google/cloud/gameservices/game_server_clusters_options.h"
#include "google/cloud/gameservices/internal/game_server_clusters_connection_impl.h"
#include "google/cloud/gameservices/internal/game_server_clusters_option_defaults.h"
#include "google/cloud/gameservices/internal/game_server_clusters_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GameServerClustersServiceConnection::~GameServerClustersServiceConnection() =
    default;

StreamRange<google::cloud::gaming::v1::GameServerCluster>
    GameServerClustersServiceConnection::ListGameServerClusters(
        google::cloud::gaming::v1::
            ListGameServerClustersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::gaming::v1::GameServerCluster>>();
}

StatusOr<google::cloud::gaming::v1::GameServerCluster>
GameServerClustersServiceConnection::GetGameServerCluster(
    google::cloud::gaming::v1::GetGameServerClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>
GameServerClustersServiceConnection::CreateGameServerCluster(
    google::cloud::gaming::v1::CreateGameServerClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gaming::v1::GameServerCluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse>
GameServerClustersServiceConnection::PreviewCreateGameServerCluster(
    google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
GameServerClustersServiceConnection::DeleteGameServerCluster(
    google::cloud::gaming::v1::DeleteGameServerClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gaming::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse>
GameServerClustersServiceConnection::PreviewDeleteGameServerCluster(
    google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>
GameServerClustersServiceConnection::UpdateGameServerCluster(
    google::cloud::gaming::v1::UpdateGameServerClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gaming::v1::GameServerCluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse>
GameServerClustersServiceConnection::PreviewUpdateGameServerCluster(
    google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<GameServerClustersServiceConnection>
MakeGameServerClustersServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 GameServerClustersServicePolicyOptionList>(
      options, __func__);
  options = gameservices_internal::GameServerClustersServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = gameservices_internal::CreateDefaultGameServerClustersServiceStub(
      background->cq(), options);
  return std::make_shared<
      gameservices_internal::GameServerClustersServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<gameservices::GameServerClustersServiceConnection>
MakeGameServerClustersServiceConnection(
    std::shared_ptr<GameServerClustersServiceStub> stub, Options options) {
  options = GameServerClustersServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      gameservices_internal::GameServerClustersServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google
