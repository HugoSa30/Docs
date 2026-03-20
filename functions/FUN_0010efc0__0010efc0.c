/*
 * Program: n42.bin
 * Function: FUN_0010efc0
 * Entry: 0010efc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010efc0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  if ((DAT_005baa26 != '\0') || (DAT_005baa27 != '\0')) {
    iVar3 = *(int *)(DAT_005baa10 + 0x10);
    bVar2 = 0;
    if (DAT_005baa25 != 0) {
      do {
        if ((*(byte *)(iVar3 + 0xc) & 0x80) != 0) {
          _5();
          if (*(short *)(iVar3 + 10) != 0) {
            *(short *)(iVar3 + 10) = *(short *)(iVar3 + 10) + -1;
          }
          _6();
          if (*(short *)(iVar3 + 10) == 0) {
            cVar1 = *(char *)(iVar3 + 0xd);
            if (cVar1 == '\x01') {
              FUN_0010fa10(bVar2);
            }
            else {
              if (cVar1 == '\x02') {
                DAT_005baa27 = DAT_005baa27 + -1;
                *(undefined *)(iVar3 + 0xd) = 0;
              }
              else {
                if (cVar1 != '\x10') {
                  if (cVar1 == ' ') {
                    FUN_0010fbbc(bVar2);
                  }
                  goto LAB_0010f0e0;
                }
                DAT_005baa26 = DAT_005baa26 + -1;
                *(undefined *)(iVar3 + 0xd) = 0;
                FUN_0010ef68(bVar2,1);
              }
              *(uint *)(iVar3 + 0x14) = ~*(uint *)(iVar3 + 0x14);
            }
          }
        }
LAB_0010f0e0:
        bVar2 = bVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (bVar2 < DAT_005baa25);
    }
  }
  return;
}

