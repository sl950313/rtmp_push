# RTMP Push SDK
based on librtmp

# ffmpeg push

### Mac(Available)
- nginx as rtmp-server
```sh
 brew tap denji/homebrew-ngxin
 brew install nginx-full --with-rtmp-module
```

start ngxin:
```sh
nginx
```

- config for nginx

```
rtmp {
    server {
        listen 8081;
        application rtmplive {
            live on;
            record off;
        }
    }
}
```

- reload ngxin

```sh
nginx -s reload
```


- ffmpeg as rtmp-push

```sh
ffmpeg -re -i /Users/shilei/Downloads/{path-to-your-mp4-file}  -c copy -f flv rtmp://127.0.0.1:8081/rtmplive/test
```

- ffmpeg/fflpay as rtmp-pull

```sh
ffplay rtmp://127.0.0.1:8081/rtmplive/test
```
