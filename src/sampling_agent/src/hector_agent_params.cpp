#include "sampling_agent/hector_agent_params.h"

namespace sampling {
namespace agent {

HectorAgentParams::HectorAgentParams() {}

bool HectorAgentParams::LoadFromRosParams(ros::NodeHandle& ph) {
  ph.param<std::string>("navigation_frame", navigation_frame, KNavigationFrame);

  ph.param<double>("navigation_height_m", navigation_height_m,
                   KNavigationHeight_m);

  ph.param<double>("takeoff_distance_m", takeoff_distance_m,
                   KTakeoffDistance_m);
  return true;
}

}  // namespace agent
}  // namespace sampling