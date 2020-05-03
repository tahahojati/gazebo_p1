#include <gazebo/gazebo.hh>
#include <iostream>
namespace gazebo {
  class HelloWorld: public WorldPlugin {
    public:
    HelloWorld(): WorldPlugin() {
      std::cout << "Welcome to Gazebo's World\n";
    }

    void Load (physics::WorldPtr w, sdf::ElementPtr e){}

  };
  GZ_REGISTER_WORLD_PLUGIN(HelloWorld)
}
