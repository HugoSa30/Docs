/*
 * Program: n42.bin
 * Function: FUN_00128bb8
 * Entry: 00128bb8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00128bb8(void)

{
  byte bVar1;
  uint uVar2;
  
  if ((B_read_active != '\0') || (B_write_active != '\0')) {
    uVar2 = 0;
    do {
      if (0x3f < (byte)(&DAT_005bb708)[uVar2 * 0xc]) {
        if ((byte)(&DAT_003fb824)[uVar2] < 3) {
          (&DAT_003fb824)[uVar2] = (&DAT_003fb824)[uVar2] + '\x01';
          if (uVar2 < 4) {
            if (uVar2 == 3) {
              bVar1 = func_0xff2102d0(8,2,4,0,&DAT_003fb818,&DAT_005bb724);
              if (0x3f < bVar1) {
                DAT_005bb72c = 0x80;
              }
            }
            else if (uVar2 == 0) {
              bVar1 = func_0xff2102d0(7,2,6,0,&DAT_003fb818,&DAT_005bb700);
              if (0x3f < bVar1) {
                DAT_005bb708 = 0x80;
              }
            }
            else if (uVar2 == 1) {
              bVar1 = func_0xff2102d0(8,2,6,0,&DAT_003fb818,&DAT_005bb70c);
              if (0x3f < bVar1) {
                DAT_005bb714 = 0x80;
              }
            }
            else if ((uVar2 == 2) &&
                    (bVar1 = func_0xff2102d0(7,2,4,0,&DAT_003fb818,&DAT_005bb718), 0x3f < bVar1)) {
              DAT_005bb720 = 0x80;
            }
          }
          else if (uVar2 == 4) {
            bVar1 = func_0xff2102d0(7,2,4,1,&DAT_003fb818,&DAT_005bb730);
            if (0x3f < bVar1) {
              DAT_005bb738 = 0x80;
            }
          }
          else if ((uVar2 == 5) &&
                  (bVar1 = func_0xff2102d0(8,2,4,1,&DAT_003fb81e,&DAT_005bb73c), 0x3f < bVar1)) {
            DAT_005bb744 = 0x80;
          }
        }
        else {
          if ((&DAT_005bb707)[uVar2 * 0xc] == '\0') {
            B_eep2err = 1;
            B_inistw = 0;
            B_resstw = 0;
            B_write_active = '\0';
          }
          else {
            B_eeperr = 1;
            B_read_active = '\0';
          }
          FUN_00127820();
        }
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < 6);
  }
  return;
}

