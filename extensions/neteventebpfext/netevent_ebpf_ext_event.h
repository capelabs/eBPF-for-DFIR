#pragma once

#include "ebpf_ext.h"

#define EBPF_NETEVENT_EXTENSION_POOL_TAG 'tvEN'

/**
 * @brief Register EVENT NPI providers.
 *
 * @retval STATUS_SUCCESS Operation succeeded.
 * @retval STATUS_UNSUCCESSFUL Operation failed.
 */
NTSTATUS
ebpf_ext_register_netevent();

/**
 * @brief Unregister EVENT NPI providers.
 *
 */
void
ebpf_ext_unregister_netevent();
