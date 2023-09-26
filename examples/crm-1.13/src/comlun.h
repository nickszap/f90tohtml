c
c $Id: comlun.h,v 1.1.1.1 1995/02/09 23:26:42 ccm2 Exp $
c $Author: ccm2 $
c
C
C Logical unit numbers and related variables
C
#if ( ! defined PNRG1 )
#define PNRG1 5
#endif
#if ( ! defined PNRG2 )
#define PNRG2 5
#endif
#if ( ! defined PNRG3 )
#define PNRG3 5
#endif
      integer
     $     pnrg1,             ! maximum number of primary 
C                             !  regeneration files
     $     pnrg2,             ! maximum number of secondary 
C                             !  regeneration files
     $     pnrg3              ! maximum number of secondary 

      parameter (pnrg1 = PNRG1)
      parameter (pnrg2 = PNRG2)
      parameter (pnrg3 = PNRG3)
C
      common/comlun/nsds    ,nrg     ,nrg1(pnrg1)      ,nrg2(pnrg2),
     $              nrg3(pnrg3,ptapes)        ,nra1    ,nrb1    ,
     $              ninit   ,nbndti  ,nozone  ,nsst    ,nabem   ,
     $              nsplit,lutag(99)
      common/comlun/rg1lat(pnrg1+1)  ,rg1siz(pnrg1)    ,rg1buf  ,nnrg1,
     $              rg2lat(pnrg2+1)  ,rg2siz(pnrg2)    ,rg2buf  ,nnrg2,
     $              rg3lat(pnrg3+1,ptapes)    ,rg3siz(pnrg3,ptapes)   ,
     $              rg3buf(ptapes)   ,nnrg3(ptapes)    ,mxszrg  ,
     $              nrefrq  ,rgnht(ptapes)    ,rg3num  ,mresfq
      common/comlunc/rg1ext(pnrg1)   ,rg2ext(pnrg2)    ,
     $               rg3ext(pnrg3,ptapes)
C
      integer nsds,     ! restart dataset unit
     $        nrg,      ! master regeneration dataset unit
     $        nrg1,     ! primary regeneration dataset units
     $        nrg2,     ! secondary regeneration dataset units
     $        nrg3,     ! hbuf regeneration dataset units
     $        nra1,     ! a work file
     $        nrb1,     ! b work file
     $        ninit,    ! initial dataset unit
     $        nbndti,   ! time-invariant boundary dataset
     $        nozone,   ! ozone dataset
     $        nsst,     ! sst dataset
     $        nabem,    ! absorptivity/emissivity work file
     $        nsplit    ! communication between LINEMS1 and LINEMS2
C
      logical
     $     lutag        ! list of flags marking logical units in use
      integer
     $     rg1lat,      ! latitude list for primary regen datasets
     $     rg1siz,      ! file sizes for preallocation
     $     rg1buf,      ! buffer length for assign
     $     nnrg1,       ! number of primary regen files written
     $     rg2lat,      ! lat list for secondary regen datasets
     $     rg2siz,      ! file size for preallocation
     $     rg2buf,      ! buffer length for assign
     $     nnrg2,       ! number of secondary regen files written
     $     rg3lat,      ! latitude list for hbuf regen datasets
     $     rg3siz,      ! file sizes for preallocation
     $     rg3buf,      ! buffer length for assign
     $     nnrg3,       ! number of hbuf regen files written
     $     mxszrg,      ! max size of a regen file (megabytes)
     $     nrefrq,      ! frequency of regeneration file writes
     $     mresfq,      ! frequency of mnthly avg regen file writes
     $     rg3num       ! number of temporary secondary regen files
      logical
     $     rgnht        ! set true if regeneration file for a h-tape exists
      character*2
     $     rg1ext,      ! file extension for primary regen files
     $     rg2ext       ! file extension for secondary regen files
      character*5
     $     rg3ext       ! file extension for secondary regen files
C
#ifdef LOGENTRY 
$Log: comlun.h,v $
 * Revision 1.1.1.1  1995/02/09  23:26:42  ccm2
 * Start Omega Model. Split into spectral/sld modules
 *
 * Revision 1.3  1994/09/16  21:07:49  rosinski
 * This is the first part of plx23.
 * 
#endif
