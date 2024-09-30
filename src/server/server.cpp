#include<QTcpServer>
#include<iostream>

class FortuneServer : public QTcpServer
{
    Q_OBJECT

public:
    FortuneServer(QObject *parent = nullptr);

protected:
    void incomingConnection(qintptr socketDescriptor) override;

private:
    QStringList fortunes;
};


int main(){
    std::cout<<"Wake the fuck up, SAMURAI!"<<std::endl;
    return 0;
}