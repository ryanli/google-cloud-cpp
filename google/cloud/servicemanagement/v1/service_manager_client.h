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
// source: google/api/servicemanagement/v1/servicemanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CLIENT_H

#include "google/cloud/servicemanagement/v1/service_manager_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace servicemanagement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// [Google Service Management
/// API](https://cloud.google.com/service-infrastructure/docs/overview)
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ServiceManagerClient {
 public:
  explicit ServiceManagerClient(
      std::shared_ptr<ServiceManagerConnection> connection, Options opts = {});
  ~ServiceManagerClient();

  ///@{
  /// @name Copy and move support
  ServiceManagerClient(ServiceManagerClient const&) = default;
  ServiceManagerClient& operator=(ServiceManagerClient const&) = default;
  ServiceManagerClient(ServiceManagerClient&&) = default;
  ServiceManagerClient& operator=(ServiceManagerClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ServiceManagerClient const& a,
                         ServiceManagerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ServiceManagerClient const& a,
                         ServiceManagerClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists managed services.
  ///
  /// Returns all public services. For authenticated users, also returns all
  /// services the calling user has "servicemanagement.services.get" permission
  /// for.
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::ListServicesRequest,google/api/servicemanagement/v1/servicemanager.proto#L261}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::ManagedService,google/api/servicemanagement/v1/resources.proto#L34}
  ///
  /// [google.api.servicemanagement.v1.ListServicesRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L261}
  /// [google.api.servicemanagement.v1.ManagedService]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L34}
  ///
  StreamRange<google::api::servicemanagement::v1::ManagedService> ListServices(
      google::api::servicemanagement::v1::ListServicesRequest request,
      Options opts = {});

  ///
  /// Gets a managed service. Authentication is required unless the service is
  /// public.
  ///
  /// @param service_name  Required. The name of the service.  See the
  /// `ServiceManager` overview for
  ///  naming requirements.  For example: `example.googleapis.com`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::ManagedService,google/api/servicemanagement/v1/resources.proto#L34}
  ///
  /// [google.api.servicemanagement.v1.GetServiceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L291}
  /// [google.api.servicemanagement.v1.ManagedService]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L34}
  ///
  StatusOr<google::api::servicemanagement::v1::ManagedService> GetService(
      std::string const& service_name, Options opts = {});

  ///
  /// Gets a managed service. Authentication is required unless the service is
  /// public.
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::GetServiceRequest,google/api/servicemanagement/v1/servicemanager.proto#L291}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::ManagedService,google/api/servicemanagement/v1/resources.proto#L34}
  ///
  /// [google.api.servicemanagement.v1.GetServiceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L291}
  /// [google.api.servicemanagement.v1.ManagedService]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L34}
  ///
  StatusOr<google::api::servicemanagement::v1::ManagedService> GetService(
      google::api::servicemanagement::v1::GetServiceRequest const& request,
      Options opts = {});

  ///
  /// Creates a new managed service.
  ///
  /// A managed service is immutable, and is subject to mandatory 30-day
  /// data retention. You cannot move a service or recreate it within 30 days
  /// after deletion.
  ///
  /// One producer project can own no more than 500 services. For security and
  /// reliability purposes, a production service should be hosted in a
  /// dedicated producer project.
  ///
  /// Operation<response: ManagedService>
  ///
  /// @param service  Required. Initial values for the service resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::ManagedService,google/api/servicemanagement/v1/resources.proto#L34}
  ///
  /// [google.api.servicemanagement.v1.CreateServiceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L298}
  /// [google.api.servicemanagement.v1.ManagedService]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L34}
  ///
  future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
  CreateService(
      google::api::servicemanagement::v1::ManagedService const& service,
      Options opts = {});

  ///
  /// Creates a new managed service.
  ///
  /// A managed service is immutable, and is subject to mandatory 30-day
  /// data retention. You cannot move a service or recreate it within 30 days
  /// after deletion.
  ///
  /// One producer project can own no more than 500 services. For security and
  /// reliability purposes, a production service should be hosted in a
  /// dedicated producer project.
  ///
  /// Operation<response: ManagedService>
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::CreateServiceRequest,google/api/servicemanagement/v1/servicemanager.proto#L298}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::ManagedService,google/api/servicemanagement/v1/resources.proto#L34}
  ///
  /// [google.api.servicemanagement.v1.CreateServiceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L298}
  /// [google.api.servicemanagement.v1.ManagedService]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L34}
  ///
  future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
  CreateService(
      google::api::servicemanagement::v1::CreateServiceRequest const& request,
      Options opts = {});

  ///
  /// Deletes a managed service. This method will change the service to the
  /// `Soft-Delete` state for 30 days. Within this period, service producers may
  /// call
  /// [UndeleteService][google.api.servicemanagement.v1.ServiceManager.UndeleteService]
  /// to restore the service. After 30 days, the service will be permanently
  /// deleted.
  ///
  /// Operation<response: google.protobuf.Empty>
  ///
  /// @param service_name  Required. The name of the service.  See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements.  For example: `example.googleapis.com`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::OperationMetadata,google/api/servicemanagement/v1/resources.proto#L45}
  ///
  /// [google.api.servicemanagement.v1.DeleteServiceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L304}
  /// [google.api.servicemanagement.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L45}
  /// [google.api.servicemanagement.v1.ServiceManager.UndeleteService]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L117}
  ///
  future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
  DeleteService(std::string const& service_name, Options opts = {});

  ///
  /// Deletes a managed service. This method will change the service to the
  /// `Soft-Delete` state for 30 days. Within this period, service producers may
  /// call
  /// [UndeleteService][google.api.servicemanagement.v1.ServiceManager.UndeleteService]
  /// to restore the service. After 30 days, the service will be permanently
  /// deleted.
  ///
  /// Operation<response: google.protobuf.Empty>
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::DeleteServiceRequest,google/api/servicemanagement/v1/servicemanager.proto#L304}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::OperationMetadata,google/api/servicemanagement/v1/resources.proto#L45}
  ///
  /// [google.api.servicemanagement.v1.DeleteServiceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L304}
  /// [google.api.servicemanagement.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L45}
  /// [google.api.servicemanagement.v1.ServiceManager.UndeleteService]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L117}
  ///
  future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
  DeleteService(
      google::api::servicemanagement::v1::DeleteServiceRequest const& request,
      Options opts = {});

  ///
  /// Revives a previously deleted managed service. The method restores the
  /// service using the configuration at the time the service was deleted.
  /// The target service must exist and must have been deleted within the
  /// last 30 days.
  ///
  /// Operation<response: UndeleteServiceResponse>
  ///
  /// @param service_name  Required. The name of the service. See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements. For example: `example.googleapis.com`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::UndeleteServiceResponse,google/api/servicemanagement/v1/servicemanager.proto#L320}
  ///
  /// [google.api.servicemanagement.v1.UndeleteServiceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L312}
  /// [google.api.servicemanagement.v1.UndeleteServiceResponse]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L320}
  ///
  future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
  UndeleteService(std::string const& service_name, Options opts = {});

  ///
  /// Revives a previously deleted managed service. The method restores the
  /// service using the configuration at the time the service was deleted.
  /// The target service must exist and must have been deleted within the
  /// last 30 days.
  ///
  /// Operation<response: UndeleteServiceResponse>
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::UndeleteServiceRequest,google/api/servicemanagement/v1/servicemanager.proto#L312}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::UndeleteServiceResponse,google/api/servicemanagement/v1/servicemanager.proto#L320}
  ///
  /// [google.api.servicemanagement.v1.UndeleteServiceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L312}
  /// [google.api.servicemanagement.v1.UndeleteServiceResponse]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L320}
  ///
  future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
  UndeleteService(
      google::api::servicemanagement::v1::UndeleteServiceRequest const& request,
      Options opts = {});

  ///
  /// Lists the history of the service configuration for a managed service,
  /// from the newest to the oldest.
  ///
  /// @param service_name  Required. The name of the service.  See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements.  For example: `example.googleapis.com`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::Service,google/api/service.proto#L80}
  ///
  /// [google.api.Service]:
  /// @googleapis_reference_link{google/api/service.proto#L80}
  /// [google.api.servicemanagement.v1.ListServiceConfigsRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L355}
  ///
  StreamRange<google::api::Service> ListServiceConfigs(
      std::string const& service_name, Options opts = {});

  ///
  /// Lists the history of the service configuration for a managed service,
  /// from the newest to the oldest.
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::ListServiceConfigsRequest,google/api/servicemanagement/v1/servicemanager.proto#L355}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::Service,google/api/service.proto#L80}
  ///
  /// [google.api.Service]:
  /// @googleapis_reference_link{google/api/service.proto#L80}
  /// [google.api.servicemanagement.v1.ListServiceConfigsRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L355}
  ///
  StreamRange<google::api::Service> ListServiceConfigs(
      google::api::servicemanagement::v1::ListServiceConfigsRequest request,
      Options opts = {});

  ///
  /// Gets a service configuration (version) for a managed service.
  ///
  /// @param service_name  Required. The name of the service.  See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements.  For example: `example.googleapis.com`.
  /// @param config_id  Required. The id of the service configuration resource.
  ///  This field must be specified for the server to return all fields,
  ///  including `SourceInfo`.
  /// @param view  Specifies which parts of the Service Config should be
  /// returned in the
  ///  response.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::Service,google/api/service.proto#L80}
  ///
  /// [google.api.Service]:
  /// @googleapis_reference_link{google/api/service.proto#L80}
  /// [google.api.servicemanagement.v1.GetServiceConfigRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L326}
  ///
  StatusOr<google::api::Service> GetServiceConfig(
      std::string const& service_name, std::string const& config_id,
      google::api::servicemanagement::v1::GetServiceConfigRequest::ConfigView
          view,
      Options opts = {});

  ///
  /// Gets a service configuration (version) for a managed service.
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::GetServiceConfigRequest,google/api/servicemanagement/v1/servicemanager.proto#L326}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::Service,google/api/service.proto#L80}
  ///
  /// [google.api.Service]:
  /// @googleapis_reference_link{google/api/service.proto#L80}
  /// [google.api.servicemanagement.v1.GetServiceConfigRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L326}
  ///
  StatusOr<google::api::Service> GetServiceConfig(
      google::api::servicemanagement::v1::GetServiceConfigRequest const&
          request,
      Options opts = {});

  ///
  /// Creates a new service configuration (version) for a managed service.
  /// This method only stores the service configuration. To roll out the service
  /// configuration to backend systems please call
  /// [CreateServiceRollout][google.api.servicemanagement.v1.ServiceManager.CreateServiceRollout].
  ///
  /// Only the 100 most recent service configurations and ones referenced by
  /// existing rollouts are kept for each service. The rest will be deleted
  /// eventually.
  ///
  /// @param service_name  Required. The name of the service.  See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements.  For example: `example.googleapis.com`.
  /// @param service_config  Required. The service configuration resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::Service,google/api/service.proto#L80}
  ///
  /// [google.api.Service]:
  /// @googleapis_reference_link{google/api/service.proto#L80}
  /// [google.api.servicemanagement.v1.CreateServiceConfigRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L379}
  /// [google.api.servicemanagement.v1.ServiceManager.CreateServiceRollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L226}
  ///
  StatusOr<google::api::Service> CreateServiceConfig(
      std::string const& service_name,
      google::api::Service const& service_config, Options opts = {});

  ///
  /// Creates a new service configuration (version) for a managed service.
  /// This method only stores the service configuration. To roll out the service
  /// configuration to backend systems please call
  /// [CreateServiceRollout][google.api.servicemanagement.v1.ServiceManager.CreateServiceRollout].
  ///
  /// Only the 100 most recent service configurations and ones referenced by
  /// existing rollouts are kept for each service. The rest will be deleted
  /// eventually.
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::CreateServiceConfigRequest,google/api/servicemanagement/v1/servicemanager.proto#L379}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::Service,google/api/service.proto#L80}
  ///
  /// [google.api.Service]:
  /// @googleapis_reference_link{google/api/service.proto#L80}
  /// [google.api.servicemanagement.v1.CreateServiceConfigRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L379}
  /// [google.api.servicemanagement.v1.ServiceManager.CreateServiceRollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L226}
  ///
  StatusOr<google::api::Service> CreateServiceConfig(
      google::api::servicemanagement::v1::CreateServiceConfigRequest const&
          request,
      Options opts = {});

  ///
  /// Creates a new service configuration (version) for a managed service based
  /// on
  /// user-supplied configuration source files (for example: OpenAPI
  /// Specification). This method stores the source configurations as well as
  /// the generated service configuration. To rollout the service configuration
  /// to other services, please call
  /// [CreateServiceRollout][google.api.servicemanagement.v1.ServiceManager.CreateServiceRollout].
  ///
  /// Only the 100 most recent configuration sources and ones referenced by
  /// existing service configurtions are kept for each service. The rest will be
  /// deleted eventually.
  ///
  /// Operation<response: SubmitConfigSourceResponse>
  ///
  /// @param service_name  Required. The name of the service.  See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements.  For example: `example.googleapis.com`.
  /// @param config_source  Required. The source configuration for the service.
  /// @param validate_only  Optional. If set, this will result in the generation
  /// of a
  ///  `google.api.Service` configuration based on the `ConfigSource` provided,
  ///  but the generated config and the sources will NOT be persisted.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::SubmitConfigSourceResponse,google/api/servicemanagement/v1/servicemanager.proto#L407}
  ///
  /// [google.api.servicemanagement.v1.ServiceManager.CreateServiceRollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L226}
  /// [google.api.servicemanagement.v1.SubmitConfigSourceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L391}
  /// [google.api.servicemanagement.v1.SubmitConfigSourceResponse]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L407}
  ///
  future<
      StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
  SubmitConfigSource(
      std::string const& service_name,
      google::api::servicemanagement::v1::ConfigSource const& config_source,
      bool validate_only, Options opts = {});

  ///
  /// Creates a new service configuration (version) for a managed service based
  /// on
  /// user-supplied configuration source files (for example: OpenAPI
  /// Specification). This method stores the source configurations as well as
  /// the generated service configuration. To rollout the service configuration
  /// to other services, please call
  /// [CreateServiceRollout][google.api.servicemanagement.v1.ServiceManager.CreateServiceRollout].
  ///
  /// Only the 100 most recent configuration sources and ones referenced by
  /// existing service configurtions are kept for each service. The rest will be
  /// deleted eventually.
  ///
  /// Operation<response: SubmitConfigSourceResponse>
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::SubmitConfigSourceRequest,google/api/servicemanagement/v1/servicemanager.proto#L391}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::SubmitConfigSourceResponse,google/api/servicemanagement/v1/servicemanager.proto#L407}
  ///
  /// [google.api.servicemanagement.v1.ServiceManager.CreateServiceRollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L226}
  /// [google.api.servicemanagement.v1.SubmitConfigSourceRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L391}
  /// [google.api.servicemanagement.v1.SubmitConfigSourceResponse]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L407}
  ///
  future<
      StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
  SubmitConfigSource(
      google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
          request,
      Options opts = {});

  ///
  /// Lists the history of the service configuration rollouts for a managed
  /// service, from the newest to the oldest.
  ///
  /// @param service_name  Required. The name of the service.  See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements.  For example: `example.googleapis.com`.
  /// @param filter  Required. Use `filter` to return subset of rollouts.
  ///  The following filters are supported:
  ///    -- To limit the results to only those in
  ///       status (google.api.servicemanagement.v1.RolloutStatus) 'SUCCESS',
  ///       use filter='status=SUCCESS'
  ///    -- To limit the results to those in
  ///       status (google.api.servicemanagement.v1.RolloutStatus) 'CANCELLED'
  ///       or 'FAILED', use filter='status=CANCELLED OR status=FAILED'
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::Rollout,google/api/servicemanagement/v1/resources.proto#L190}
  ///
  /// [google.api.servicemanagement.v1.ListServiceRolloutsRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L424}
  /// [google.api.servicemanagement.v1.Rollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L190}
  ///
  StreamRange<google::api::servicemanagement::v1::Rollout> ListServiceRollouts(
      std::string const& service_name, std::string const& filter,
      Options opts = {});

  ///
  /// Lists the history of the service configuration rollouts for a managed
  /// service, from the newest to the oldest.
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::ListServiceRolloutsRequest,google/api/servicemanagement/v1/servicemanager.proto#L424}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::Rollout,google/api/servicemanagement/v1/resources.proto#L190}
  ///
  /// [google.api.servicemanagement.v1.ListServiceRolloutsRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L424}
  /// [google.api.servicemanagement.v1.Rollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L190}
  ///
  StreamRange<google::api::servicemanagement::v1::Rollout> ListServiceRollouts(
      google::api::servicemanagement::v1::ListServiceRolloutsRequest request,
      Options opts = {});

  ///
  /// Gets a service configuration
  /// [rollout][google.api.servicemanagement.v1.Rollout].
  ///
  /// @param service_name  Required. The name of the service.  See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements.  For example: `example.googleapis.com`.
  /// @param rollout_id  Required. The id of the rollout resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::Rollout,google/api/servicemanagement/v1/resources.proto#L190}
  ///
  /// [google.api.servicemanagement.v1.GetServiceRolloutRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L458}
  /// [google.api.servicemanagement.v1.Rollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L190}
  ///
  StatusOr<google::api::servicemanagement::v1::Rollout> GetServiceRollout(
      std::string const& service_name, std::string const& rollout_id,
      Options opts = {});

  ///
  /// Gets a service configuration
  /// [rollout][google.api.servicemanagement.v1.Rollout].
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::GetServiceRolloutRequest,google/api/servicemanagement/v1/servicemanager.proto#L458}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::Rollout,google/api/servicemanagement/v1/resources.proto#L190}
  ///
  /// [google.api.servicemanagement.v1.GetServiceRolloutRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L458}
  /// [google.api.servicemanagement.v1.Rollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L190}
  ///
  StatusOr<google::api::servicemanagement::v1::Rollout> GetServiceRollout(
      google::api::servicemanagement::v1::GetServiceRolloutRequest const&
          request,
      Options opts = {});

  ///
  /// Creates a new service configuration rollout. Based on rollout, the
  /// Google Service Management will roll out the service configurations to
  /// different backend services. For example, the logging configuration will be
  /// pushed to Google Cloud Logging.
  ///
  /// Please note that any previous pending and running Rollouts and associated
  /// Operations will be automatically cancelled so that the latest Rollout will
  /// not be blocked by previous Rollouts.
  ///
  /// Only the 100 most recent (in any state) and the last 10 successful (if not
  /// already part of the set of 100 most recent) rollouts are kept for each
  /// service. The rest will be deleted eventually.
  ///
  /// Operation<response: Rollout>
  ///
  /// @param service_name  Required. The name of the service.  See the
  ///  [overview](https://cloud.google.com/service-infrastructure/docs/overview)
  ///  for naming requirements.  For example: `example.googleapis.com`.
  /// @param rollout  Required. The rollout resource. The `service_name` field
  /// is output only.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::Rollout,google/api/servicemanagement/v1/resources.proto#L190}
  ///
  /// [google.api.servicemanagement.v1.CreateServiceRolloutRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L413}
  /// [google.api.servicemanagement.v1.Rollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L190}
  ///
  future<StatusOr<google::api::servicemanagement::v1::Rollout>>
  CreateServiceRollout(
      std::string const& service_name,
      google::api::servicemanagement::v1::Rollout const& rollout,
      Options opts = {});

  ///
  /// Creates a new service configuration rollout. Based on rollout, the
  /// Google Service Management will roll out the service configurations to
  /// different backend services. For example, the logging configuration will be
  /// pushed to Google Cloud Logging.
  ///
  /// Please note that any previous pending and running Rollouts and associated
  /// Operations will be automatically cancelled so that the latest Rollout will
  /// not be blocked by previous Rollouts.
  ///
  /// Only the 100 most recent (in any state) and the last 10 successful (if not
  /// already part of the set of 100 most recent) rollouts are kept for each
  /// service. The rest will be deleted eventually.
  ///
  /// Operation<response: Rollout>
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::CreateServiceRolloutRequest,google/api/servicemanagement/v1/servicemanager.proto#L413}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::Rollout,google/api/servicemanagement/v1/resources.proto#L190}
  ///
  /// [google.api.servicemanagement.v1.CreateServiceRolloutRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L413}
  /// [google.api.servicemanagement.v1.Rollout]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/resources.proto#L190}
  ///
  future<StatusOr<google::api::servicemanagement::v1::Rollout>>
  CreateServiceRollout(
      google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
          request,
      Options opts = {});

  ///
  /// Generates and returns a report (errors, warnings and changes from
  /// existing configurations) associated with
  /// GenerateConfigReportRequest.new_value
  ///
  /// If GenerateConfigReportRequest.old_value is specified,
  /// GenerateConfigReportRequest will contain a single ChangeReport based on
  /// the comparison between GenerateConfigReportRequest.new_value and
  /// GenerateConfigReportRequest.old_value.
  /// If GenerateConfigReportRequest.old_value is not specified, this method
  /// will compare GenerateConfigReportRequest.new_value with the last pushed
  /// service configuration.
  ///
  /// @param new_config  Required. Service configuration for which we want to
  /// generate the report.
  ///  For this version of API, the supported types are
  ///  [google.api.servicemanagement.v1.ConfigRef][google.api.servicemanagement.v1.ConfigRef],
  ///  [google.api.servicemanagement.v1.ConfigSource][google.api.servicemanagement.v1.ConfigSource],
  ///  and [google.api.Service][google.api.Service]
  /// @param old_config  Optional. Service configuration against which the
  /// comparison will be done.
  ///  For this version of API, the supported types are
  ///  [google.api.servicemanagement.v1.ConfigRef][google.api.servicemanagement.v1.ConfigRef],
  ///  [google.api.servicemanagement.v1.ConfigSource][google.api.servicemanagement.v1.ConfigSource],
  ///  and [google.api.Service][google.api.Service]
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::GenerateConfigReportResponse,google/api/servicemanagement/v1/servicemanager.proto#L486}
  ///
  /// [google.api.servicemanagement.v1.GenerateConfigReportRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L469}
  /// [google.api.servicemanagement.v1.GenerateConfigReportResponse]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L486}
  ///
  StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
  GenerateConfigReport(google::protobuf::Any const& new_config,
                       google::protobuf::Any const& old_config,
                       Options opts = {});

  ///
  /// Generates and returns a report (errors, warnings and changes from
  /// existing configurations) associated with
  /// GenerateConfigReportRequest.new_value
  ///
  /// If GenerateConfigReportRequest.old_value is specified,
  /// GenerateConfigReportRequest will contain a single ChangeReport based on
  /// the comparison between GenerateConfigReportRequest.new_value and
  /// GenerateConfigReportRequest.old_value.
  /// If GenerateConfigReportRequest.old_value is not specified, this method
  /// will compare GenerateConfigReportRequest.new_value with the last pushed
  /// service configuration.
  ///
  /// @param request
  /// @googleapis_link{google::api::servicemanagement::v1::GenerateConfigReportRequest,google/api/servicemanagement/v1/servicemanager.proto#L469}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicemanagement::v1::GenerateConfigReportResponse,google/api/servicemanagement/v1/servicemanager.proto#L486}
  ///
  /// [google.api.servicemanagement.v1.GenerateConfigReportRequest]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L469}
  /// [google.api.servicemanagement.v1.GenerateConfigReportResponse]:
  /// @googleapis_reference_link{google/api/servicemanagement/v1/servicemanager.proto#L486}
  ///
  StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
  GenerateConfigReport(
      google::api::servicemanagement::v1::GenerateConfigReportRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<ServiceManagerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CLIENT_H
