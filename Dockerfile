FROM busybox:latest
COPY build /build
COPY . /repo
RUN cp repo/bin/* /bin