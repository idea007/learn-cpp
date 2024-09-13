#include <iostream>

class FeatureDataPacketInfo
{
public:
    // 定义字段 是 json 还是 zip
    std::string type;

    // 数据包版本号 1.0.1
    std::string version;

    // 定义数据格式   json/zip
    std::string format;

    // 定义数据  json/zip
    std::string data;

    // TODO: 可选参数
    // zip 下载路径
    std::string download_url;
};