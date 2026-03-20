/*
 * Program: n42.bin
 * Function: FUN_00093f64
 * Entry: 00093f64
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00093f64(void)

{
  uint uVar1;
  char cVar3;
  undefined4 uVar2;
  
  if (DAT_003f9e40 == '\0') {
    uVar1 = _DAT_003fa168 >> 0xf & 0xff;
    _DAT_003fa15c =
         (1 << ((uVar1 - (_DAT_003fa164 >> 0xf & 0xff)) + 1 & 0x3f)) + -1 << (0x1f - uVar1 & 0x3f);
    cVar3 = FUN_00094a38(1);
    if ((cVar3 == '\0') && (cVar3 = FUN_00094c38(_DAT_003fa15c), cVar3 == '\0')) {
      DAT_003f9e40 = '\x02';
    }
    else {
      DAT_003f9e40 = '\x01';
    }
  }
  if (DAT_003f9e40 == '\x02') {
    cVar3 = FUN_00094d30();
    if (cVar3 == '\0') {
      DAT_003f9e40 = '\0';
    }
    else if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      uVar2 = FUN_00094038();
      return uVar2;
    }
  }
  if (DAT_003f9e40 == '\0') {
    uVar2 = 0;
  }
  else {
    if (DAT_003f9e40 == '\x02') {
      return 0x100;
    }
    DAT_003f9e40 = '\0';
    uVar2 = 0x40;
  }
  FUN_00095294();
  return uVar2;
}

