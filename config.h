
# httplib - C++ HTTP library
# https://github.com/yhirose/cpp-httplib
# version: v0.8.4
# license: MIT

git clone https://github.com/yhirose/cpp-httplib.git
cd cpp-httplib
git checkout v0.8.4
mkdir build
cd build
cmake ..
make
sudo make install
cd ../../
rm -rf cpp-httplib

# json - JSON for Modern C++
# https://github.com/nlohmann/json
# version: v3.9.1
# license: MIT

git clone https://github.com/nlohmann/json.git
cd json
git checkout v3.9.1
mkdir build
cd build
cmake ..
make
sudo make install
cd ../../
rm -rf json
