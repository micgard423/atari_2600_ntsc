#include <stdio.h>
#include <string.h>
#include <ctype.h> 

// Define color names and values
struct Color {
    char name[20];
    unsigned int value;
};

struct Color colorList[] = {
    {"black", 0x00},
    {"dim_grey", 0x02},
    {"dim_grey2", 0x04},
    {"grey", 0x06},
    {"teal", 0x10},
    {"muddy_green", 0x12},
    {"olive_green", 0x14},
    {"steel_blue", 0x16},
    {"pasta_red", 0x20},
    {"light_pasta_red", 0x24},
    {"cider", 0x26},
    {"ruby", 0x30},
    {"crimson", 0x40},
    {"cherry_red2", 0x42},
    {"red", 0x44},
    {"plum", 0x50 },
    {"dark_magenta", 0x52 },
    {"lipstick_stain", 0x54 },
    {"orchid", 0x56 },
    {"northwestern_purple", 0x60},
    {"eminence", 0x62 },
    {"grape_color", 0x64},
    {"purpureus", 0x66},
    {"medium_orchid", 0x68},
    {"navy", 0x70},
    {"azure", 0x72},
    {"eminence", 0x74},
    {"iris", 0x76},
    {"studio", 0x78},
    {"egyptian_blue", 0x80},
    {"boeing_blue", 0x82 },
    {"lapis", 0x84 },
    {"blue", 0x86},
    {"cornflower_blue", 0x88},
    {"admiral", 0x90},
    {"little_boy_blue", 0x98},
    {"pine", 0xD0},
    {"moss_green", 0xD2},
    {"avocade", 0xD4},
    {"b'dazzled", 0xA0},
    {"airforce_blue", 0xA2},
    {"blue_yonder", 0xA4},
    {"steel", 0xA6},
    {"carolina_blue", 0xA8},
    {"verdun_green", 0xD4},
    {"pear", 0xD6},
    {"castleton_green", 0xB0},
    {"tropical_rainforest", 0xB2},
    {"amazon", 0xB4},
    {"jade_green", 0xB6},
    {"seaweed", 0xC0},
    {"emerald_green", 0xC2},
    {"fun_green", 0xC4},
    {"pine", 0xE0},
    {"army_color", 0xE2},
    {"crocodile", 0xE4},
    {"sage", 0xE6},
    {"swamp", 0xE8},
    {"roasted_coffee", 0xF0},
    {"peanut_brown", 0xF2},
    {"tortilla_brown", 0xF4},
    {"khaki", 0xF8}
};

int main() {
    // Output the list of available colors
    printf("Available colors:\n");
    for (int i = 0; i < sizeof(colorList) / sizeof(colorList[0]); i++) {
        printf("%s\n", colorList[i].name);
    }

    // Get user input
    char input[20];
    printf("\nEnter a color name: ");
    scanf("%s", input);

    // Convert input to lowercase for case-insensitive comparison
    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    // Search for the color in the list
    unsigned int hexValue = 0;
    int found = 0;
    for (int i = 0; i < sizeof(colorList) / sizeof(colorList[0]); i++) {
        if (strcmp(input, colorList[i].name) == 0) {
            hexValue = colorList[i].value;
            found = 1;
            break;
        }
    }

    // Output result
    if (found) {
        printf("Hexadecimal value for %s is #$%X\n", input, hexValue);
    } else {
        printf("Color not found in the list.\n");
    }

    return 0;
}

