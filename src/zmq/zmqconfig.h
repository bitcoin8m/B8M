// Copyright (c) 2015 The Bitcoin8m Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN8M_ZMQ_ZMQCONFIG_H
#define BITCOIN8M_ZMQ_ZMQCONFIG_H

#if defined(HAVE_CONFIG_H)
#include "config/bitcoin8m-config.h"
#endif

#include <stdarg.h>
#include <string>

#if ENABLE_ZMQ
#include <zmq.h>
#endif

#include "primitives/block.h"
#include "primitives/transaction.h"

void zmqError(const char *str);

#endif // BITCOIN8M_ZMQ_ZMQCONFIG_H
