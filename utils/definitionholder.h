/**
  * \class DefinitionHolder
  * \brief This class holds global definitions relevant to Smyphytm App
  * \author Giorgio Wicklein - GIOWISYS Software
  * \date 08/04/2012
  */

#ifndef DEFINITIONHOLDER_H
#define DEFINITIONHOLDER_H


//-----------------------------------------------------------------------------
// Forward declarations
//-----------------------------------------------------------------------------

class QString;


//-----------------------------------------------------------------------------
// DefinitionHolder
//-----------------------------------------------------------------------------

class DefinitionHolder
{
public:
    static QString VERSION;        /**< Software version                   */
    static QString NAME;           /**< Software name                      */
    static QString COPYRIGHT;      /**< Software copyright                 */
    static QString COMPANY;        /**< Company name used in settings      */
    static QString DOMAIN_NAME;    /**< Domain name used in settings       */
    static QString UPDATE_URL;     /**< Url where to check for updates     */
    static QString DOWNLOAD_URL;   /**< Url where to download the software */
    static int SOFTWARE_BUILD;     /**< Build no. of the software          */
    static int DATABASE_VERSION;   /**< Version no. of the database        */
    static bool APP_STORE;         /**< Deployment target is an app store  */

private:
    DefinitionHolder() {} //static only
};

#endif // DEFINITIONHOLDER_H
