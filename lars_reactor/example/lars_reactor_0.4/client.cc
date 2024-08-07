#include <stdio.h>
#include <string.h>
#include <functional>
#include "tcp_client.hpp"
#include "net_connection.hpp"

using namespace qc;
//客户端业务
// msg_callback const char *data, uint32_t len, int msgid, tcp_conn *conn, void *user_data
// 这里busi类型如果是msg_callback类型,得返回
void busi(const char *data, uint32_t len, int msgid, net_connection *conn,
                  void *user_data) {
    printf("recv server: [%s]\n", data);
    printf("msgid: [%d]\n", msgid);
    printf("len: [%d]\n", len);
    //return nullptr;
}

int main() {
    event_loop loop;

    //创建tcp客户端
    tcp_client client(&loop, "127.0.0.1", 7777, "clientv0.4");

    //printf("create connection success!\n");

    //注册回调业务
    client.set_msg_callback(busi);
    //printf("set_callback_success!\n");
    // 注册完之后向服务端发送消息

    //开启事件监听
    loop.event_process();

    return 0;
}