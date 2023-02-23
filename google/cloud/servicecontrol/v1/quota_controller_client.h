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
// source: google/api/servicecontrol/v1/quota_controller.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V1_QUOTA_CONTROLLER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V1_QUOTA_CONTROLLER_CLIENT_H

#include "google/cloud/servicecontrol/v1/quota_controller_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicecontrol_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// [Google Quota Control API](/service-control/overview)
///
/// Allows clients to allocate and release quota against a [managed
/// service](https://cloud.google.com/service-management/reference/rpc/google.api/servicemanagement.v1#google.api.servicemanagement.v1.ManagedService).
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
class QuotaControllerClient {
 public:
  explicit QuotaControllerClient(
      std::shared_ptr<QuotaControllerConnection> connection, Options opts = {});
  ~QuotaControllerClient();

  ///@{
  /// @name Copy and move support
  QuotaControllerClient(QuotaControllerClient const&) = default;
  QuotaControllerClient& operator=(QuotaControllerClient const&) = default;
  QuotaControllerClient(QuotaControllerClient&&) = default;
  QuotaControllerClient& operator=(QuotaControllerClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(QuotaControllerClient const& a,
                         QuotaControllerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(QuotaControllerClient const& a,
                         QuotaControllerClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Attempts to allocate quota for the specified consumer. It should be called
  /// before the operation is executed.
  ///
  /// This method requires the `servicemanagement.services.quota`
  /// permission on the specified service. For more information, see
  /// [Cloud IAM](https://cloud.google.com/iam).
  ///
  /// **NOTE:** The client **must** fail-open on server errors `INTERNAL`,
  /// `UNKNOWN`, `DEADLINE_EXCEEDED`, and `UNAVAILABLE`. To ensure system
  /// reliability, the server may inject these errors to prohibit any hard
  /// dependency on the quota functionality.
  ///
  /// @param request
  /// @googleapis_link{google::api::servicecontrol::v1::AllocateQuotaRequest,google/api/servicecontrol/v1/quota_controller.proto#L63}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::api::servicecontrol::v1::AllocateQuotaResponse,google/api/servicecontrol/v1/quota_controller.proto#L178}
  ///
  /// [google.api.servicecontrol.v1.AllocateQuotaRequest]:
  /// @googleapis_reference_link{google/api/servicecontrol/v1/quota_controller.proto#L63}
  /// [google.api.servicecontrol.v1.AllocateQuotaResponse]:
  /// @googleapis_reference_link{google/api/servicecontrol/v1/quota_controller.proto#L178}
  ///
  StatusOr<google::api::servicecontrol::v1::AllocateQuotaResponse>
  AllocateQuota(
      google::api::servicecontrol::v1::AllocateQuotaRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<QuotaControllerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V1_QUOTA_CONTROLLER_CLIENT_H
