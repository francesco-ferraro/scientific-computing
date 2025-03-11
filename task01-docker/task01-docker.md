# Installing Docker on macOS and running AlmaLinux 9

This guide will show how to install Docker on macOS and run an AlmaLinux 9 container.

## Install Docker on macOS
Download Docker Desktop from [docker.com](https://www.docker.com). An account is required for the download. Once the download is complete, open the .dmg file and drag the Docker icon to the Applications folder. Open Docker from the Applications folder and follow the prompts to install.

## Create an AlmaLinux 9 container
Open Terminal and run the following command to pull the AlmaLinux 9 image from Docker Hub:
```
docker pull almalinux:9
```
Once the image is downloaded create a container with the following command:
```
docker create -it --name almalinux9 almalinux:9
```
The flag `-it` is used to create an interactive container.

## Start the container
To start the container, use Docker Desktop or run the following command in Terminal:
```
docker start almalinux9
```

## Check container is working
To check that the container is running open a shell in the container:
```
docker exec -it almalinux9 /bin/bash
```
Inside the terminal run the following command to check the version of AlmaLinux:
```
cat /etc/os-release
```
The output should show the AlmaLinux version.

## Stop the container
To stop the container, use Docker Desktop or run the following command in Terminal:
```
docker stop almalinux9
```