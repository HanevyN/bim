// SPDX-License-Identifier: AGPL-3.0-only
#pragma once

#include <entt/entity/fwd.hpp>

#include <chrono>

namespace bim::game
{
  class arena;

  void update_brick_walls(entt::registry& registry, arena& arena);
}
