/*
 * Program: n42.bin
 * Function: FUN_0009e69c
 * Entry: 0009e69c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009e69c(void)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    if ((_DAT_003fa158 < 2) && (_DAT_003fa164 < 2)) {
      FUN_0009d0b0(0);
      if (_DAT_003fa158 != 2) {
        FUN_0009d0b0(1);
        goto LAB_0009e6f0;
      }
LAB_0009e6fc:
      FUN_0009d1e8(0);
    }
    else {
LAB_0009e6f0:
      if (_DAT_003fa158 == 2) goto LAB_0009e6fc;
    }
    if (_DAT_003fa164 == 2) {
      FUN_0009d1e8(1);
    }
    if (_DAT_003fa158 == 3) {
      if (_DAT_003fa164 < 4) {
        if ((_DAT_003fa164 < 3) || (_DAT_003fa160 <= _DAT_003fa16c)) {
          FUN_000b126c(_DAT_003fa138 + 0x10,0xa5a5);
          FUN_0009d00c(0);
        }
        goto LAB_0009e768;
      }
    }
    else {
LAB_0009e768:
      if (((_DAT_003fa164 == 3) && (_DAT_003fa158 < 4)) &&
         ((_DAT_003fa158 < 3 || (_DAT_003fa16c < _DAT_003fa160)))) {
        FUN_000b126c(_DAT_003fa148 + 0x10,0xa5a5);
        FUN_0009d00c(1);
      }
    }
    if (_DAT_003fa158 == 4) {
      FUN_0009e4c4(0);
    }
    if (_DAT_003fa164 == 4) {
      FUN_0009e4c4(1);
    }
    if ((_DAT_003fa158 == 5) || (_DAT_003fa164 == 5)) {
      return 1;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}

