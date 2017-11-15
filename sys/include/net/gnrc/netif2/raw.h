/*
 * Copyright (C) 2017 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup net_gnrc_netif2
 * @{
 *
 * @file
 * @brief   Raw (i.e. raw IP packets without link-layer information) adaptation
 *          for @ref net_gnrc_netif2
 *
 * @author  Martine Lenders <m.lenders@fu-berlin.de>
 */
#ifndef NET_GNRC_NETIF2_RAW_H
#define NET_GNRC_NETIF2_RAW_H

#include "net/gnrc/netif2.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Creates a raw network interface
 *
 * @param[in] stack     The stack for the network interface's thread.
 * @param[in] stacksize Size of @p stack.
 * @param[in] priority  Priority for the network interface's thread.
 * @param[in] name      Name for the network interface. May be NULL.
 * @param[in] dev       Device for the interface.
 *
 * @see @ref gnrc_netif2_create()
 *
 * @return  The network interface on success.
 * @return  NULL, on error.
 */
gnrc_netif2_t *gnrc_netif2_raw_create(char *stack, int stacksize, char priority,
                                      char *name, netdev_t *dev);

#ifdef __cplusplus
}
#endif

#endif /* NET_GNRC_NETIF2_RAW_H */
/** @} */
