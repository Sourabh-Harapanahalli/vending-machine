# Vending Machine Microservices 🚀

This project implements a **microservices-based vending machine** system built using **Apache Thrift**, **C++**, **Lua**, **OpenResty**, and **Nginx** with reverse proxy. The application is containerized using Docker and designed for modular, scalable service deployment.

---

## 🧩 Architecture Overview

```
                       +-------------------+
                       |   Nginx + Lua     |
                       | (Reverse Proxy)   |
                       +---------+---------+
                                 |
            +--------------------+---------------------+
            |                    |                     |
+------------------+  +-------------------+  +------------------------+
| Order Service     |  | Weather Service   |  | Beverage Preference   |
| (Thrift, C++)     |  | (Thrift, C++)     |  | Service (Thrift, C++)|
+------------------+  +-------------------+  +------------------------+
```

Nginx routes requests to appropriate services using Lua scripts and OpenResty.

---

## 🛠️ Tech Stack

| Component        | Technology        |
|------------------|------------------|
| API Interface    | Apache Thrift    |
| Core Services    | C++              |
| Reverse Proxy    | Nginx + Lua      |
| Lua Runtime      | OpenResty        |
| Containerization | Docker           |

---

## 📁 Directory Structure

```
vending-machine-microservices/
├── src/                       # C++ service implementations
│   ├── OrderBeverageService/
│   ├── WeatherService/
│   └── BeveragePreferenceService/
├── gen-cpp/                   # Thrift-generated C++ code
├── gen-lua/                   # Thrift-generated Lua code
├── nginx_reverse_proxy/
│   ├── conf/nginx.conf        # Nginx configuration
│   └── lua-scripts/           # Lua routing logic
├── scripts/
│   └── generate_request.sh    # Script to generate sample requests
├── Dockerfile
└── CMakeLists.txt
```

---

## 📦 Building & Running

### 1. Clone the repository

```bash
git clone https://github.com/Sourabh-Harapanahalli/vending-machine.git
cd vending-machine
```

### 2. Generate Thrift Bindings

Make sure `thrift` compiler is installed:

```bash
sudo apt install thrift-compiler
thrift --gen cpp --gen lua vending_machine.thrift
```

### 3. Build C++ Services

```bash
mkdir build && cd build
cmake ..
make
```

### 4. Run via Docker

#### Build Docker Image

```bash
docker build -t sourabhharpanhalli/vending-machine:latest .
```

#### Push to DockerHub (optional)

```bash
docker push sourabhharpanhalli/vending-machine:latest
```

#### Run Container

```bash
docker run -p 8080:8080 sourabhharpanhalli/vending-machine:latest
```

---

## 🌐 Endpoint Routing (via Nginx + Lua)

| HTTP Endpoint           | Target Service               |
|-------------------------|------------------------------|
| `/order`                | OrderBeverageService         |
| `/weather`              | WeatherService               |
| `/beverage-preference`  | BeveragePreferenceService    |

These routes are defined in `nginx_reverse_proxy/conf/nginx.conf` and Lua scripts inside `lua-scripts/`.

---

## 🧪 Sample Test Request

To test the full microservices pipeline:

```bash
./script/generate_request.sh
```

This script sends test requests to all endpoints.

---

## 🐳 Docker Image Info

Your image should now be available on [Docker Hub](https://hub.docker.com/r/sourabhharpanhalli/vending-machine)  
Make sure you're logged in using:

```bash
docker login
```

---

## 🔐 Authentication

Future enhancements can include:
- JWT-based authentication
- OAuth2 integration
- Role-based access control in Lua scripts

---

## ✨ Future Enhancements

- Add Redis/Memcached caching layer
- Monitoring via Prometheus + Grafana
- CI/CD using GitHub Actions
- Kubernetes deployment manifest

---

## 📜 License

[Apache 2.0 License](https://www.apache.org/licenses/LICENSE-2.0)

---

## 👨‍💻 Author

**Sourabh Harapanahalli**  
[GitHub Profile](https://github.com/Sourabh-Harapanahalli)

---

## 🤝 Contributions

Contributions are welcome! Please fork the repo and submit a pull request.
