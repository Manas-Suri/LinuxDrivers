# LinuxDrivers

This document pertains to the *LinuxDrivers* repository, focusing on the *DriverHDMI* folder.

## DriverHDMI

Within this directory, you will find a makefile and a C file. The makefile is utilized to generate essential files necessary for the production of drivers.

### A. Driver Compilation

1. Navigate to the *DriverHDMI* directory and initiate a command prompt.

2. Execute the following bash command:

    ```bash
    make
    ```

    Upon executing the *make* command, multiple files will be generated.

3. Proceed to install the *hdmi-driver.ko* to your device:

    ```bash
    sudo insmod hdmi-driver.ko
    ```

    This command facilitates the installation of the driver.

    **Note:** Should there exist a driver with a similar name or an outdated version, it is imperative to remove the previous driver by issuing the following command:

    ```bash
    sudo rmmod hdmi-driver.ko
    ```

### B. Command Output Analysis

1. Observe that the driver contains various *printk* commands. To analyze the printed commands, utilize the following command:

    ```bash
    sudo dmesg
    ```
