/*
 * Program: n42.bin
 * Function: FUN_000e4308
 * Entry: 000e4308
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e4308(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_003fc1de != '\0') {
    uVar1 = FUN_000a7f20(_DAT_001cb67e,nmot_w,_DAT_003fb6e8,_DAT_003fb6e8 & 0xffff);
    _DAT_003fb6e8 = (undefined2)(uVar1 >> 0x10);
    DAT_005b96c8 = _DAT_003fb6e8;
    _DAT_003fb6e8 = uVar1;
    if (DAT_003fc1df != '\0') {
      iVar2 = (uint)nmot_w - (uint)DAT_005b96ca;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      DAT_005b96c0 = (short)iVar2;
      iVar2 = (int)DAT_005b96c0 + (int)DAT_005b96c2;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      DAT_005b96c2 = (short)iVar2;
      if (((DAT_003fb6f0 & 1) == 0) &&
         ((_DAT_001cb670 < DAT_005b96c2 || (DAT_005b96c2 < _DAT_001cb672)))) {
        DAT_005b91f0 = DAT_005b91f0 + 1;
        DAT_003fb6f0 = DAT_003fb6f0 & 0xfe | 1;
        DAT_005b8b93 = DAT_005b8b93 + '\x01';
        if (DAT_001d2a06 < DAT_005b91f0) {
          tc6tesc = 0x88;
          if (DAT_005b96c2 < 0) {
            _tc6tesw = -DAT_005b96c2;
            if (_DAT_001cb672 < 0) {
              _tc6tess = -_DAT_001cb672;
            }
            else {
              _tc6tess = _DAT_001cb672;
            }
          }
          else if (0 < DAT_005b96c2) {
            _tc6tesw = DAT_005b96c2;
            if (_DAT_001cb670 < 0) {
              _tc6tess = -_DAT_001cb670;
            }
            else {
              _tc6tess = _DAT_001cb670;
            }
          }
        }
      }
    }
  }
  return;
}

