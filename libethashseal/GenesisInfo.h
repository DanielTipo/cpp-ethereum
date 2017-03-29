/*
        This file is part of cpp-ethereum.

        cpp-ethereum is free software: you can redistribute it and/or modify
        it under the terms of the GNU General Public License as published by
        the Free Software Foundation, either version 3 of the License, or
        (at your option) any later version.

        cpp-ethereum is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
        GNU General Public License for more details.

        You should have received a copy of the GNU General Public License
        along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file GenesisInfo.h
 * @author Gav Wood <i@gavwood.com>
 * @date 2014
 */

#pragma once

#include <string>
#include <libdevcore/FixedHash.h>
#include <libethcore/Common.h>

namespace dev
{
namespace eth
{

/// The network id.
enum class Network
{
	// NETWORKS 0x10000 - 0x1ffff
	MainNetwork = 0x10000,
	// TEST 0x20000 - 0x2ffff
	MainNetworkTest = 0x20000
};

std::string const& genesisInfo(Network _n);
h256 const& genesisStateRoot(Network _n);

}
}
