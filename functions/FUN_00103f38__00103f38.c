/*
 * Program: n42.bin
 * Function: FUN_00103f38
 * Entry: 00103f38
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00103f38(void)

{
  int iVar1;
  char cVar4;
  int iVar2;
  uint uVar3;
  bool bVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_001037c4(0xffe5c0,7);
  if (iVar1 == 0) {
    uVar6 = 9;
  }
  else {
    cVar4 = FUN_00103e70();
    if ((cVar4 == '\0') || (cVar4 = FUN_00103d40(), cVar4 == '\0')) {
      uVar6 = 0xc;
    }
    else {
      iVar2 = FUN_001037c4(&DAT_00f00208,0xc);
      if (iVar2 == 0) {
        uVar6 = 10;
      }
      else {
        cVar4 = FUN_00103e04();
        if ((cVar4 == '\0') || (cVar4 = FUN_00103d98(), cVar4 != '\0')) {
          bVar5 = true;
          uVar3 = 0;
          while( true ) {
            if (*(char *)(iVar1 + uVar3) != *(char *)(iVar2 + uVar3)) {
              bVar5 = false;
            }
            uVar3 = uVar3 + 1 & 0xff;
            if (5 < uVar3) break;
            if (!bVar5) {
              return 0xb;
            }
          }
          if (!bVar5) {
            return 0xb;
          }
          cVar4 = FUN_00103c90();
          if (cVar4 != '\0') {
            iVar1 = FUN_001037c4(&DAT_001c0210,0x11);
            if (iVar1 == 0) {
              return 0xd;
            }
            cVar4 = FUN_00103ce8();
            if (cVar4 != '\0') {
              bVar5 = true;
              uVar3 = 0;
              do {
                if (*(char *)(iVar2 + uVar3) != *(char *)(iVar1 + uVar3)) {
                  bVar5 = false;
                }
                uVar3 = uVar3 + 1 & 0xff;
              } while ((uVar3 < 6) && (bVar5));
              uVar3 = 7;
              if (bVar5) {
                do {
                  if (*(char *)(iVar2 + uVar3) != *(char *)(iVar1 + uVar3)) {
                    bVar5 = false;
                  }
                  uVar3 = uVar3 + 1 & 0xff;
                  if (9 < uVar3) {
                    if (!bVar5) {
                      return 0xe;
                    }
                    return 1;
                  }
                } while (bVar5);
              }
              return 0xe;
            }
            return 6;
          }
          iVar1 = FUN_00103584();
          if (iVar1 == 0) {
            return 8;
          }
          cVar4 = FUN_00103bf4();
          if (cVar4 == '\0') {
            return 0xf;
          }
          return 0;
        }
        uVar6 = 5;
      }
    }
  }
  return uVar6;
}

