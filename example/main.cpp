#include <pvrtc/pvrtc.h>
#include <fstream>
#include <vector>

int main() {
    std::ifstream stream("PVRT_4.bin", std::ios::binary | std::ios::ate);
    std::size_t stream_size = stream.tellg();

    stream.seekg(0, std::ios::beg);

    std::vector<char> data;
    data.resize(stream_size);

    stream.read(data.data(), stream_size);
    std::vector<std::uint8_t> result;
    result.resize(1024 * 512 * 4);

    PVRTDecompressPVRTC(data.data(), 0, 1024, 512, 1, &result[0]);

    std::ofstream out("PVRTC_6_decomp.bin", std::ios::binary);
    out.write((const char*)&result[0], result.size());

    return 0;
}