FROM ubuntu

LABEL description "Gothic Online Server"

ADD https://github.com/Paragrimm/Gothic-Online/releases/download/v0.4.7a/GO_Server.zip /GO_Server/
WORKDIR /GO_Server

# Enable 32-bit architecture
RUN dpkg --add-architecture i386

RUN apt-get update
RUN apt-get install unzip
RUN apt-get install --no-install-recommends --assume-yes wine
RUN apt-get install --no-install-recommends --assume-yes wine32

RUN unzip GO_Server.zip
RUN rm GO_Server.zip

EXPOSE 28970/tcp
EXPOSE 28970/udp

CMD [ "wine", "GO_Server.exe" ]