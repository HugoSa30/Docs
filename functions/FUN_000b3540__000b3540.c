/*
 * Program: n42.bin
 * Function: FUN_000b3540
 * Entry: 000b3540
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b3540(void)

{
  bool bVar1;
  
  (*(code *)&SUB_000654dc)(&DAT_005b8d0a,&DAT_005b8e45,&DAT_003f9b96,&DAT_005b9a40);
  if (DAT_003f9b95 == DAT_005b8e45) {
    if (DAT_003f9b99 != '\0') {
      DAT_003f9b99 = DAT_003f9b99 + -1;
      if ((DAT_005b8e4c < DAT_001c7add) && (DAT_005b8e4b == 0)) {
        DAT_005b8e4c = DAT_005b8e4c + 1;
      }
    }
    if (DAT_005b8d0a == '\0') {
      if (DAT_003f9b98 != '\0') {
        DAT_003f9b98 = DAT_003f9b98 + -1;
        if ((DAT_005b8e4b != 0) && (DAT_005b8e4b < DAT_001c7adc)) {
          DAT_005b8e4b = DAT_005b8e4b + 1;
        }
      }
      if (DAT_005b8e4a < DAT_001c7adb) {
        DAT_005b8e4a = DAT_005b8e4a + 1;
        DAT_005b8d16 = 0;
        bVar1 = false;
      }
      else {
        DAT_005b8d13 = '\0';
        DAT_005b8d14 = '\0';
        DAT_005b8e4b = 0;
        DAT_005b8e4c = 0;
        DAT_005b8d16 = 1;
        bVar1 = true;
        DAT_005b8d0b = 0;
        DAT_005b8d10 = 0;
        DAT_005b8d0e = 0;
        DAT_005b8d11 = 0;
        DAT_005b8d0f = 0;
        DAT_005b8e46 = 0xfe;
      }
    }
    else {
      DAT_005b8d16 = 0;
      bVar1 = false;
      DAT_005b8d14 = '\0';
      DAT_005b8e4a = 0;
      DAT_005b8e4c = 0;
      DAT_003f9b98 = '\x03';
      DAT_005b8d0b = 0;
      DAT_005b8d10 = 0;
      DAT_005b8d0e = 0;
      DAT_005b8d11 = 0;
      DAT_005b8d0f = 0;
      DAT_005b8e46 = 0xfe;
      if (DAT_005b8e4b < DAT_001c7adc) {
        DAT_005b8e4b = DAT_005b8e4b + 1;
        DAT_005b8d13 = '\0';
      }
      else {
        DAT_005b8d13 = '\x01';
      }
    }
    goto LAB_000b3aa0;
  }
  DAT_003f9b95 = DAT_005b8e45;
  if (0xa4e < DAT_005b9a40 - 0x3b43) {
    DAT_005b8d16 = 0;
    bVar1 = false;
    DAT_005b8d14 = '\0';
    DAT_005b8e4a = 0;
    DAT_005b8e4c = 0;
    DAT_003f9b98 = '\x03';
    DAT_005b8d0b = 0;
    DAT_005b8d10 = 0;
    DAT_005b8d0e = 0;
    DAT_005b8d11 = 0;
    DAT_005b8d0f = 0;
    DAT_005b8e46 = 0xfe;
    if (DAT_005b8e4b < DAT_001c7adc) {
      DAT_005b8e4b = DAT_005b8e4b + 1;
      DAT_005b8d13 = '\0';
    }
    else {
      DAT_005b8d13 = '\x01';
    }
    goto LAB_000b3aa0;
  }
  if (DAT_003fdc74 == '\0') {
    DAT_003fdc74 = '\x01';
  }
  DAT_005b8d16 = 0;
  bVar1 = false;
  DAT_005b8d13 = '\0';
  DAT_005b8e4a = 0;
  DAT_005b8e4b = 0;
  DAT_003f9b99 = '\x03';
  DAT_005b8e46 = DAT_003f9b96;
  if ((DAT_003f9b96 & 0xfe) == 0xfe) {
    DAT_005b8d11 = 0;
LAB_000b375c:
    DAT_005b8d10 = 0;
    DAT_005b8d0e = 0;
    DAT_005b8d0b = 0;
    DAT_005b8d0f = 0;
  }
  else if ((DAT_003f9b96 & 0x24) == 0) {
    DAT_005b8d0b = 1;
    DAT_005b8d10 = 0;
    DAT_005b8d0e = 0;
    DAT_005b8d11 = 0;
    DAT_005b8d0f = 0;
  }
  else if ((DAT_003f9b96 & 2) == 0) {
    DAT_005b8d0b = 0;
    DAT_005b8d10 = 1;
    DAT_005b8d0e = 0;
    DAT_005b8d11 = 0;
    DAT_005b8d0f = 1;
  }
  else if ((DAT_003f9b96 & 0x48) == 0) {
    DAT_005b8d0b = 0;
    DAT_005b8d10 = 0;
    DAT_005b8d0e = 1;
    DAT_005b8d11 = 0;
    DAT_005b8d0f = 1;
  }
  else if ((DAT_003f9b96 & 0x90) == 0) {
    DAT_005b8d11 = 1;
    goto LAB_000b375c;
  }
  if ((DAT_003f9b96 & 1) == 0) {
    if (DAT_005b8d17 == '\0') {
      DAT_005b8d17 = '\x01';
      DAT_005b8d14 = '\0';
      DAT_005b8e4c = 0;
    }
    else if (DAT_005b8e4c < DAT_001c7add) {
      DAT_005b8e4c = DAT_005b8e4c + 1;
      DAT_005b8d14 = '\0';
    }
    else {
      DAT_005b8d14 = '\x01';
    }
  }
  else if (DAT_005b8d17 == '\0') {
    if (DAT_005b8e4c < DAT_001c7add) {
      DAT_005b8e4c = DAT_005b8e4c + 1;
      DAT_005b8d14 = '\0';
    }
    else {
      DAT_005b8d14 = '\x01';
    }
  }
  else {
    DAT_005b8d17 = '\0';
    DAT_005b8d14 = '\0';
    DAT_005b8e4c = 0;
  }
LAB_000b3aa0:
  if ((DAT_005b8e46 & 0x4a) == 0) {
    if (DAT_005b8e47 < DAT_001c7ad5) {
      DAT_005b8e47 = DAT_005b8e47 + 1;
    }
    else {
      DAT_005b8d15 = '\x01';
    }
  }
  else {
    DAT_005b8d15 = '\0';
    DAT_005b8e47 = 0;
  }
  if ((((DAT_005b8d14 != '\0') || (bVar1)) || (DAT_005b8d13 != '\0')) || (DAT_005b8d15 != '\0')) {
    DAT_005b8d0c = 1;
  }
  else {
    DAT_005b8d0c = 0;
  }
  if ((DAT_001c7ade < ub) && (DAT_003fdc74 != '\0')) {
    if (((bVar1) || (DAT_005b8d14 != '\0')) || ((DAT_005b8d13 != '\0' || (DAT_005b8d15 != '\0')))) {
      DAT_003f9b94 = DAT_003f9b94 & 0xfe;
      DAT_005b8e48 = 0;
    }
    else if (DAT_005b8e48 < DAT_001c7ad6) {
      DAT_005b8e48 = DAT_005b8e48 + 1;
    }
    else {
      DAT_003f9b94 = DAT_003f9b94 | 1;
    }
  }
  else {
    DAT_005b8e48 = 0;
  }
  return;
}

