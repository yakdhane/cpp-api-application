Here's the Dockerfile code:

```
# Base image
FROM ubuntu:latest

# Update package list
RUN apt-get update

# Install g++ compiler
RUN apt-get install -y g++

# Set working directory
WORKDIR /app

# Copy source code to container
COPY . .

# Compile the application
RUN g++ -o app main.cpp component1.cpp component2.cpp component3.cpp component4.cpp component5.cpp

# Set the entrypoint
ENTRYPOINT ["./app"]
```
$$$