# vial-qmk installation


# Project folder location and structure
Place project folders (e.g. "my_keyboard") into `vial-qmk/keyboards/handwired/mike/`:

```
my_keyboard/
├─ keyboard.json        <-- keyboard metadata
├─ readme.md            <-- optional documentation
└─ keymaps/
    └─ vial/
        ├─ config.h     <-- hardware & feature config
        ├─ keymap.c     <-- layer definitions
        ├─ rules.mk     <-- build rules for Vial
        └─ vial.json    <-- Vial GUI metadata
```

Note: Within `keymaps` you can also have a `default` folder with a `keymap.c` file. This is for default qmk, but not absolutely required for vial.

# Generate UID
1. In the termial, change directory to vial-qmk folder: `$` `cd ~/Repositories/Keyboards/vial-qmk`
2. Create new UID: `$` `python3 util/vial_generate_keyboard_uid.py`
3. Add the output to `config.h` (example): 

    ```#define VIAL_KEYBOARD_UID {0xE6, 0xCB, 0xCD, 0x5A, 0x4D, 0x1F, 0xCD, 0xFE}```

# Keycodes
## Generic keycodes
- Basic: https://docs.qmk.fm/keycodes_basic
- Header file: https://github.com/qmk/qmk_firmware/blob/master/quantum/keycodes.h

## Country-specific keycodes 
- Documentation: https://docs.qmk.fm/reference_keymap_extras
- Header files: https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras

# LEDs
- https://docs.qmk.fm/features/rgblight
- https://docs.qmk.fm/drivers/ws2812

# Compiling and flashing
1. In the termial, change directory to vial-qmk folder: `$` `cd ~/Repositories/Keyboards/vial-qmk`
2. Compile "my_keyboard" keyboard project: `$` `qmk compile -kb handwired/mike/my_keyboard -km vial`
3. Flash "my_keyboard" keyboard project: `$` `qmk flash -kb handwired/mike/my_keyboard -km vial`

# Configuring Keyboard
Download the VIAL app here, launch it, and plug in the keyboard: https://get.vial.today/download/

Alternatively, plug in key board and open https://vial.rocks/

Note: The webside may not seem to work on Ubuntu Firefox, but on Chrome it does

After changing the settings, they will be automatically loaded onto the keyboard's memory. As backup, a vial layout file (`*.vil`) can be downloaded. It can be but does not have to be stored within this structure:

```
my_keyboard/
├─ ...
└─ layouts/
    └─ layout.vil
```

# Tips and Tricks
- To format a layout.vil file into a nice json format (once association is set in VSCode), click `Ctrl`+`Shift`+`I`
- To show live rendering of markdown file (e.g. readme.md) in VSCode, open the file and press `Ctrl`+`Shift`+`V`

# Other links
- https://usevia.app/design
- https://caniusevia.com/
- https://docs.keeb.supply/basics/firmware/viaandvial/

- https://vial.rocks/
- https://get.vial.today/manual/first-use.html
- https://get.vial.today/manual/linux-udev.html#reloading-udev


- https://www.keyboard-layout-editor.com/

- https://config.qmk.fm/#/dc01/arrow/LAYOUT

- https://docs.qmk.fm/platformdev_rp2040