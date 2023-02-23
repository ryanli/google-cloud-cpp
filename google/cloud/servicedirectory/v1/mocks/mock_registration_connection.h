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
// source: google/cloud/servicedirectory/v1/registration_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_MOCKS_MOCK_REGISTRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_MOCKS_MOCK_REGISTRATION_CONNECTION_H

#include "google/cloud/servicedirectory/v1/registration_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace servicedirectory_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegistrationServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegistrationServiceClient`. To do
 * so, construct an object of type `RegistrationServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockRegistrationServiceConnection
    : public servicedirectory_v1::RegistrationServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::servicedirectory::v1::Namespace>, CreateNamespace,
      (google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::servicedirectory::v1::Namespace>,
      ListNamespaces,
      (google::cloud::servicedirectory::v1::ListNamespacesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::servicedirectory::v1::Namespace>, GetNamespace,
      (google::cloud::servicedirectory::v1::GetNamespaceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::servicedirectory::v1::Namespace>, UpdateNamespace,
      (google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteNamespace,
      (google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::servicedirectory::v1::Service>,
              CreateService,
              (google::cloud::servicedirectory::v1::CreateServiceRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::servicedirectory::v1::Service>, ListServices,
      (google::cloud::servicedirectory::v1::ListServicesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::servicedirectory::v1::Service>, GetService,
      (google::cloud::servicedirectory::v1::GetServiceRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::servicedirectory::v1::Service>,
              UpdateService,
              (google::cloud::servicedirectory::v1::UpdateServiceRequest const&
                   request),
              (override));

  MOCK_METHOD(Status, DeleteService,
              (google::cloud::servicedirectory::v1::DeleteServiceRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::servicedirectory::v1::Endpoint>,
              CreateEndpoint,
              (google::cloud::servicedirectory::v1::CreateEndpointRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::servicedirectory::v1::Endpoint>, ListEndpoints,
      (google::cloud::servicedirectory::v1::ListEndpointsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::servicedirectory::v1::Endpoint>, GetEndpoint,
      (google::cloud::servicedirectory::v1::GetEndpointRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::servicedirectory::v1::Endpoint>,
              UpdateEndpoint,
              (google::cloud::servicedirectory::v1::UpdateEndpointRequest const&
                   request),
              (override));

  MOCK_METHOD(Status, DeleteEndpoint,
              (google::cloud::servicedirectory::v1::DeleteEndpointRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_MOCKS_MOCK_REGISTRATION_CONNECTION_H
