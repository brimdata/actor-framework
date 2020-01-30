/******************************************************************************
 *                       ____    _    _____                                   *
 *                      / ___|  / \  |  ___|    C++                           *
 *                     | |     / _ \ | |_       Actor                         *
 *                     | |___ / ___ \|  _|      Framework                     *
 *                      \____/_/   \_|_|                                      *
 *                                                                            *
 * Copyright 2011-2020 Dominik Charousset                                     *
 *                                                                            *
 * Distributed under the terms and conditions of the BSD 3-Clause License or  *
 * (at your option) under the terms and conditions of the Boost Software      *
 * License 1.0. See accompanying files LICENSE and LICENSE_ALTERNATIVE.       *
 *                                                                            *
 * If you did not receive a copy of the license files, see                    *
 * http://opensource.org/licenses/BSD-3-Clause and                            *
 * http://www.boost.org/LICENSE_1_0.txt.                                      *
 ******************************************************************************/

#pragma once

#include "caf/io/fwd.hpp"
#include "caf/type_id.hpp"

CAF_BEGIN_TYPE_ID_BLOCK(io_module, builtin_type_ids.last)

  CAF_ADD_TYPE_ID(io_module, caf::io::acceptor_closed_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::acceptor_passivated_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::connection_closed_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::connection_passivated_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::data_transferred_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::datagram_sent_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::datagram_servant_closed_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::datagram_servant_passivated_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::new_connection_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::new_data_msg);
  CAF_ADD_TYPE_ID(io_module, caf::io::new_datagram_msg);

CAF_END_TYPE_ID_BLOCK(io_module)
