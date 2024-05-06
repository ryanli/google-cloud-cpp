# Copyright 2018 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# DO NOT EDIT -- GENERATED BY CMake -- Change the CMakeLists.txt file if needed

"""Automatically generated source lists for google_cloud_cpp_storage_grpc - DO NOT EDIT."""

google_cloud_cpp_storage_grpc_hdrs = [
    "async/bucket_name.h",
    "async/client.h",
    "async/connection.h",
    "async/idempotency_policy.h",
    "async/object_responses.h",
    "async/options.h",
    "async/reader.h",
    "async/reader_connection.h",
    "async/resume_policy.h",
    "async/rewriter.h",
    "async/rewriter_connection.h",
    "async/token.h",
    "async/write_payload.h",
    "async/writer.h",
    "async/writer_connection.h",
    "grpc_plugin.h",
    "internal/async/accumulate_read_object.h",
    "internal/async/connection_fwd.h",
    "internal/async/connection_impl.h",
    "internal/async/connection_tracing.h",
    "internal/async/default_options.h",
    "internal/async/insert_object.h",
    "internal/async/partial_upload.h",
    "internal/async/read_payload_fwd.h",
    "internal/async/read_payload_impl.h",
    "internal/async/reader_connection_factory.h",
    "internal/async/reader_connection_impl.h",
    "internal/async/reader_connection_resume.h",
    "internal/async/reader_connection_tracing.h",
    "internal/async/rewriter_connection_impl.h",
    "internal/async/rewriter_connection_tracing.h",
    "internal/async/token_impl.h",
    "internal/async/write_payload_fwd.h",
    "internal/async/write_payload_impl.h",
    "internal/async/writer_connection_buffered.h",
    "internal/async/writer_connection_finalized.h",
    "internal/async/writer_connection_impl.h",
    "internal/async/writer_connection_tracing.h",
    "internal/grpc/bucket_access_control_parser.h",
    "internal/grpc/bucket_metadata_parser.h",
    "internal/grpc/bucket_name.h",
    "internal/grpc/bucket_request_parser.h",
    "internal/grpc/buffer_read_object_data.h",
    "internal/grpc/channel_refresh.h",
    "internal/grpc/configure_client_context.h",
    "internal/grpc/ctype_cord_workaround.h",
    "internal/grpc/default_options.h",
    "internal/grpc/hmac_key_metadata_parser.h",
    "internal/grpc/hmac_key_request_parser.h",
    "internal/grpc/make_cord.h",
    "internal/grpc/metrics_exporter_options.h",
    "internal/grpc/monitoring_project.h",
    "internal/grpc/notification_metadata_parser.h",
    "internal/grpc/notification_request_parser.h",
    "internal/grpc/object_access_control_parser.h",
    "internal/grpc/object_metadata_parser.h",
    "internal/grpc/object_read_source.h",
    "internal/grpc/object_request_parser.h",
    "internal/grpc/owner_parser.h",
    "internal/grpc/scale_stall_timeout.h",
    "internal/grpc/service_account_parser.h",
    "internal/grpc/sign_blob_request_parser.h",
    "internal/grpc/split_write_object_data.h",
    "internal/grpc/stub.h",
    "internal/grpc/synthetic_self_link.h",
    "internal/storage_auth_decorator.h",
    "internal/storage_logging_decorator.h",
    "internal/storage_metadata_decorator.h",
    "internal/storage_round_robin_decorator.h",
    "internal/storage_stub.h",
    "internal/storage_stub_factory.h",
    "internal/storage_tracing_stub.h",
]

google_cloud_cpp_storage_grpc_srcs = [
    "async/bucket_name.cc",
    "async/client.cc",
    "async/idempotency_policy.cc",
    "async/object_responses.cc",
    "async/reader.cc",
    "async/resume_policy.cc",
    "async/rewriter.cc",
    "async/writer.cc",
    "grpc_plugin.cc",
    "internal/async/accumulate_read_object.cc",
    "internal/async/connection_impl.cc",
    "internal/async/connection_tracing.cc",
    "internal/async/default_options.cc",
    "internal/async/insert_object.cc",
    "internal/async/partial_upload.cc",
    "internal/async/reader_connection_factory.cc",
    "internal/async/reader_connection_impl.cc",
    "internal/async/reader_connection_resume.cc",
    "internal/async/reader_connection_tracing.cc",
    "internal/async/rewriter_connection_impl.cc",
    "internal/async/rewriter_connection_tracing.cc",
    "internal/async/token_impl.cc",
    "internal/async/writer_connection_buffered.cc",
    "internal/async/writer_connection_finalized.cc",
    "internal/async/writer_connection_impl.cc",
    "internal/async/writer_connection_tracing.cc",
    "internal/grpc/bucket_access_control_parser.cc",
    "internal/grpc/bucket_metadata_parser.cc",
    "internal/grpc/bucket_name.cc",
    "internal/grpc/bucket_request_parser.cc",
    "internal/grpc/buffer_read_object_data.cc",
    "internal/grpc/channel_refresh.cc",
    "internal/grpc/configure_client_context.cc",
    "internal/grpc/default_options.cc",
    "internal/grpc/hmac_key_metadata_parser.cc",
    "internal/grpc/hmac_key_request_parser.cc",
    "internal/grpc/make_cord.cc",
    "internal/grpc/metrics_exporter_options.cc",
    "internal/grpc/monitoring_project.cc",
    "internal/grpc/notification_metadata_parser.cc",
    "internal/grpc/notification_request_parser.cc",
    "internal/grpc/object_access_control_parser.cc",
    "internal/grpc/object_metadata_parser.cc",
    "internal/grpc/object_read_source.cc",
    "internal/grpc/object_request_parser.cc",
    "internal/grpc/owner_parser.cc",
    "internal/grpc/scale_stall_timeout.cc",
    "internal/grpc/service_account_parser.cc",
    "internal/grpc/sign_blob_request_parser.cc",
    "internal/grpc/split_write_object_data.cc",
    "internal/grpc/stub.cc",
    "internal/grpc/synthetic_self_link.cc",
    "internal/storage_auth_decorator.cc",
    "internal/storage_logging_decorator.cc",
    "internal/storage_metadata_decorator.cc",
    "internal/storage_round_robin_decorator.cc",
    "internal/storage_stub.cc",
    "internal/storage_stub_factory.cc",
    "internal/storage_tracing_stub.cc",
]
