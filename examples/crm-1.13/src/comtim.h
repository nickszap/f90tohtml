c
c $Id: comtim.h,v 1.1.1.1 1995/02/09 23:26:44 ccm2 Exp $
c $Author: ccm2 $
c
C
C Model time variables
C
      common/comtim/calday  ,dtime   ,twodt   ,nrstrt  ,nstep   ,
     $              nstepr  ,nestep  ,nelapse ,nstop   ,mdbase  ,
     $              msbase  ,mdcur   ,mscur   ,mbdate  ,mbsec   ,
     $              mcdate  ,mcsec   ,nndbas  ,nnsbas  ,nnbdat  ,
     $              nnbsec  ,doabsems,dosw    ,dolw
C
      real calday,   ! Current calendar day = julian day + fraction
     $     dtime,    ! Time step in seconds (delta t)
     $     twodt     ! 2 * delta t 
      integer
     $     nrstrt,   ! Starting time step of restart run (constant) 
     $     nstep,    ! Current time step
     $     nstepr,   ! Current time step of restart run(updated w/nstep)
     $     nestep,   ! Time step on which to stop run
     $     nelapse,  ! Requested elapsed time for model run
     $     nstop,    ! nestep + 1
     $     mdbase,   ! Base day of run
     $     msbase,   ! Base seconds of base day
     $     mdcur,    ! Current day of run
     $     mscur,    ! Current seconds of current day
     $     mbdate,   ! Base date of run (yymmdd format)
     $     mbsec,    ! Base seconds of base date
     $     mcdate,   ! Current date of run (yymmdd format)
     $     mcsec,    ! Current seconds of current date
     $     nndbas,   ! User input base day
     $     nnsbas,   ! User input base seconds of input base day
     $     nnbdat,   ! User input base date (yymmdd format)
     $     nnbsec    ! User input base seconds of input base date
      logical
     $     doabsems, ! True => abs/emiss calculation this timestep
     $     dosw,     ! True => shortwave calculation this timestep
     $     dolw      ! True => longwave calculation this timestep
C
#ifdef LOGENTRY 
$Log: comtim.h,v $
 * Revision 1.1.1.1  1995/02/09  23:26:44  ccm2
 * Start Omega Model. Split into spectral/sld modules
 *
 * Revision 1.1.1.1  1994/04/21  23:55:13  ccm2
 * First cvs version of plx22
 * 
#endif
