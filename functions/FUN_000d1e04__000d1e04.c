/*
 * Program: n42.bin
 * Function: FUN_000d1e04
 * Entry: 000d1e04
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d1e04(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort local_20;
  ushort local_1e;
  
  DAT_005b8e6a = FUN_000f405c(1,&local_20);
  if (DAT_003f9b25 == '\x01') {
    uVar2 = (uint)local_1e;
    uVar3 = local_20 - uVar2 & 0xffff;
  }
  else {
    uVar3 = (uint)local_1e;
    uVar2 = local_20 - uVar3;
  }
  if (DAT_005b8e6a == '\0') {
    if (DAT_005b8e69 != 0xff) {
      DAT_005b8e69 = DAT_005b8e69 + 1;
    }
    DAT_005b9ab8 = 0;
    if (DAT_001c7c62 < DAT_005b8e69) {
      if (DAT_001c7c63 == '\x01') {
        if (DAT_005b8e6c < 4) {
          if (DAT_005b8e6c == 3) {
            uVar1 = uVar3 + uVar2 & 0xffff;
            if ((uVar1 < _DAT_001c7c60) || (_DAT_001c7c5e < uVar1)) {
              DAT_005b8e6c = 0;
              DAT_005b8e6b = DAT_005b8e6b & 0xdf | 8;
            }
            else {
              DAT_005b9abe = (ushort)(uVar3 + uVar2);
              DAT_005b8e6c = 4;
            }
          }
          else if (DAT_005b8e6c == 0) {
            if ((int)((uint)_FUN_001c7c58 - (uint)_DAT_001c7c5e) < (int)uVar3) {
              DAT_005b8e6c = 1;
            }
            if (DAT_005b8e6d != -1) {
              DAT_005b8e6d = DAT_005b8e6d + '\x01';
            }
          }
          else if (DAT_005b8e6c == 1) {
            uVar1 = uVar3 + uVar2 & 0xffff;
            if (_DAT_001c7c5e < uVar1) {
              if ((uVar1 < _DAT_001c7c5c) || (_DAT_001c7c5a < uVar1)) {
                DAT_005b8e6c = 0;
                DAT_005b8e6b = DAT_005b8e6b & 0xdf | 0x10;
              }
              else {
                DAT_005b9abc = (ushort)(uVar3 + uVar2);
                DAT_005b8e6c = 2;
              }
            }
            else {
              DAT_005b8e6c = 0;
            }
          }
          else if (DAT_005b8e6c == 2) {
            uVar2 = uVar3 + DAT_005b9abc & 0xffff;
            if ((uVar2 < _FUN_001c7c58) || (_DAT_001c7c56 < uVar2)) {
              DAT_005b8e6c = 0;
              DAT_005b8e6b = DAT_005b8e6b & 0xdf | 4;
            }
            else {
              DAT_005b9aba = (undefined2)(uVar3 + DAT_005b9abc);
              if ((DAT_005b8e6b & 0x20) != 0) {
                DAT_005b8e6b = DAT_005b8e6b | 1;
                DAT_005b8938 = 1;
              }
              DAT_005b8e6c = 3;
            }
          }
        }
        else if (DAT_005b8e6c == 4) {
          uVar2 = uVar3 + DAT_005b9abe & 0xffff;
          if ((uVar2 < _FUN_001c7c58) || (_DAT_001c7c56 < uVar2)) {
            DAT_005b8e6c = 0;
            DAT_005b8e6b = DAT_005b8e6b & 0xdf | 4;
          }
          else {
            DAT_005b9aba = (undefined2)(uVar3 + DAT_005b9abe);
            if ((DAT_005b8e6b & 0x20) != 0) {
              DAT_005b8e6b = DAT_005b8e6b | 1;
              DAT_005b8938 = 1;
            }
            DAT_005b8e6c = 5;
          }
        }
        else if (DAT_005b8e6c == 5) {
          uVar1 = uVar3 + uVar2 & 0xffff;
          if ((uVar1 < _DAT_001c7c5c) || (_DAT_001c7c5a < uVar1)) {
            DAT_005b8e6c = 0;
            DAT_005b8e6b = DAT_005b8e6b & 0xdf | 0x10;
          }
          else {
            DAT_005b9abc = (ushort)(uVar3 + uVar2);
            DAT_005b8937 = 1;
            DAT_005b8e6b = DAT_005b8e6b & 0xe3 | 0x22;
            if (DAT_005b8e6d != '\0') {
              DAT_005b8e6d = DAT_005b8e6d + -1;
            }
            DAT_005b8e6c = 2;
          }
        }
      }
      else if (DAT_001c7c63 == '\x02') {
        if ((uVar3 < _FUN_001c7c58) || (_DAT_001c7c56 < uVar3)) {
          if (DAT_005b8e6d != -1) {
            DAT_005b8e6d = DAT_005b8e6d + '\x01';
          }
          DAT_005b8e6b = DAT_005b8e6b | 4;
        }
        else {
          DAT_005b9aba = (undefined2)uVar3;
          DAT_005b8e6b = DAT_005b8e6b & 0xfb | 1;
          DAT_005b8938 = 1;
        }
        DAT_005b9ab8 = 0;
        DAT_005b8e6c = 0;
        DAT_005b8e6b = DAT_005b8e6b & 0xdf;
      }
    }
    else {
      DAT_005b9ab8 = 0;
    }
  }
  else if (DAT_001c7c63 == '\0') {
    DAT_005b9ab8 = 0;
    DAT_005b8e6d = '\0';
    DAT_005b8e6b = 0;
    DAT_005b8e6c = 0;
  }
  else if (DAT_005b9ab8 != -1) {
    DAT_005b9ab8 = DAT_005b9ab8 + 1;
  }
  return;
}

