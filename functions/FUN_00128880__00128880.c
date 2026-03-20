/*
 * Program: n42.bin
 * Function: FUN_00128880
 * Entry: 00128880
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00128880(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = func_0xff210928(7,0,0);
  uVar1 = uVar1 & 0xff;
  if (((((int)uVar1 >> 6 & 1U) == 0) && (((int)uVar1 >> 3 & 1U) != 0)) && ((int)uVar1 >> 7 == 0)) {
    if ((DAT_003fe880 == DAT_003fb7fb) && (DAT_003fe87f == DAT_003fb7fd)) {
      if (((_DAT_003fe95c == 0) && (_DAT_003fe95e == _DAT_003fe974)) && ((EwsNvBits >> 2 & 1) == 0))
      {
        B_resstw = 0;
        return;
      }
      B_resstw = '\0';
    }
    else if ((_DAT_003fe968 != 0) || (_DAT_003fe96a != _DAT_003fe974)) {
      B_resstw = '\0';
    }
  }
  else {
    uVar1 = func_0xff210928(8,0,0);
    uVar1 = uVar1 & 0xff;
    if (((((int)uVar1 >> 6 & 1U) == 0) && (((int)uVar1 >> 3 & 1U) != 0)) && ((int)uVar1 >> 7 == 0))
    {
      if ((DAT_003fe88a == DAT_003fb7fb) && (DAT_003fe889 == DAT_003fb7fd)) {
        if (((_DAT_003fe95c == 0) && (_DAT_003fe95e == _DAT_003fe974)) &&
           ((EwsNvBits >> 2 & 1) == 0)) {
          B_resstw = 0;
          return;
        }
        B_resstw = '\0';
      }
      else if ((_DAT_003fe968 != 0) || (_DAT_003fe96a != _DAT_003fe974)) {
        B_resstw = '\0';
      }
    }
    else if ((_DAT_003fe968 != 0) || (_DAT_003fe96a != _DAT_003fe974)) {
      B_resstw = '\0';
    }
  }
  if (B_resstw == '\0') {
    B_kwperr = 1;
    EwsNvBits = EwsNvBits & 0xfb;
  }
  else {
    FUN_001285b0();
    B_write_active = 1;
    DAT_003fb824 = 0;
    bVar2 = func_0xff2102d0(7,2,6,0,&DAT_003fb818,&DAT_005bb700);
    if (0x3f < bVar2) {
      DAT_005bb708 = 0x80;
    }
    DAT_003fb825 = 0;
    bVar2 = func_0xff2102d0(8,2,6,0,&DAT_003fb818,&DAT_005bb70c);
    if (0x3f < bVar2) {
      DAT_005bb714 = 0x80;
    }
  }
                    /* WARNING: Read-only address (ram,0x003fb7fb) is written */
                    /* WARNING: Read-only address (ram,0x003fb7fd) is written */
                    /* WARNING: Read-only address (ram,0x003fe87f) is written */
                    /* WARNING: Read-only address (ram,0x003fe880) is written */
                    /* WARNING: Read-only address (ram,0x003fe889) is written */
                    /* WARNING: Read-only address (ram,0x003fe88a) is written */
  return;
}

