c
c $Id: crdcae.h,v 1.1.1.1 1995/02/09 23:26:46 ccm2 Exp $
c $Author: ccm2 $
c
C
C Water vapor narrow band constants for longwave radiation computations
C
      common/crdcae/realk(2), st(2), a1(2), a2(2), b1(2), b2(2),
     $              coefa(3,4),coefb(4,4),coefc(3,4),coefd(4,4),
     $              coefe(3,4),coeff(6,2),coefg(2,4),coefh(2,4),
     $              coefi(6,2),coefj(3,2),coefk(3,2),
     $              c1(4),c2(4),c3(4),c4(4),c5(4),c6(4),c7(4),c8,c9,
     $              c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,
     $              c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,
     $              fwcoef,fwc1,fwc2,fc1,cfa1
C
      real realk,     ! H2O narrow band parameter
     $     st,        ! H2O narrow band parameter
     $     a1,a2,     ! Temperature correction terms for H2O path
     $     b1,b2      ! Temperature correction terms for H2O path
C
C Constant coefficients for water vapor absorptivity and emissivity
C
      real coefa,coefb,coefc,coefd,coefe,coeff,
     $     coefg,coefh,coefi,coefj,coefk,
     $      c1, c2, c3, c4, c5, c6, c7,c8 ,c9 ,c10,
     $     c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,
     $     c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31
C
C Farwing correction constants for narrow-band emissivity model,
C introduced to account for the deficiencies in narrow-band model
C used to derive the emissivity; tuned with Arking's line-by-line
C calculations.
C
      real fwcoef,
     $     fwc1,fwc2,
     $     fc1,
     $     cfa1
C
#ifdef LOGENTRY 
$Log: crdcae.h,v $
 * Revision 1.1.1.1  1995/02/09  23:26:46  ccm2
 * Start Omega Model. Split into spectral/sld modules
 *
 * Revision 1.1.1.1  1994/04/21  23:55:13  ccm2
 * First cvs version of plx22
 * 
#endif
