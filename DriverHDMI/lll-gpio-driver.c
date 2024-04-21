#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/of_device.h>
#include <linux/of_platform.h>

static int hdmi_probe(struct platform_device *pdev);

static int hdmi_remove(struct platform_device *pdev);

static const struct of_device_id hdmi_of_match[] = {
    { .compatible = "hdmi", },
    { /* end of list */ },
};

static struct platform_driver hdmi_driver = {
    .probe = hdmi_probe,
    .remove = hdmi_remove,
    .driver = {
        .name = "hdmi_driver",
        .of_match_table = hdmi_of_match,
    },
};

static int hdmi_probe(struct platform_device *pdev)
{
    printk("HDMI device found\n");
    return 0;
}

static int hdmi_remove(struct platform_device *pdev)
{
    printk("HDMI device removed\n");
    return 0;
}

static int __init hdmi_driver_init(void)
{
    int result;

    result = platform_driver_register(&hdmi_driver);
    if (result < 0) {
        printk("Failed to register HDMI driver\n");
        return result;
    }

    printk("HDMI driver registered\n");
    return 0;
}

module_init(hdmi_driver_init);
module_exit(hdmi_driver_exit);
