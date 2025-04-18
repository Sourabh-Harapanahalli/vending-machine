FROM python:3.8-slim
WORKDIR /app
COPY . .
RUN pip install thrift
CMD ["python", "beverage_server.py"]
