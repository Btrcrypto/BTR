// Copyright (c) 2018,   The TURTLECOIN Developers
// Copyright (c) 2018, The BitcoinRich Developers 
// Please see the included LICENSE file for more information.

#pragma once

#include <NodeRpcProxy/NodeRpcProxy.h>

#include <zedwallet/Types.h>

int main(int argc, char **argv);

void run(CryptoNote::WalletGreen &wallet, CryptoNote::INode &node,
         Config &config);
