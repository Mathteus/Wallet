FROM alpine:3.14
WORKDIR /home/app
COPY . .

CMD ./DataBaseServer
CMD ssh -R wallet-simple:80:localhost:8080 serveo.net
EXPOSE 8080
