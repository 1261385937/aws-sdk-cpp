﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/AddressType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>The address that you want the Snow device(s) associated with a specific job
   * to be shipped to. Addresses are validated at the time of creation. The address
   * you provide must be located within the serviceable area of your region. Although
   * no individual elements of the <code>Address</code> are required, if the address
   * is invalid or unsupported, then an exception is thrown.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/Address">AWS
   * API Reference</a></p>
   */
  class Address
  {
  public:
    AWS_SNOWBALL_API Address();
    AWS_SNOWBALL_API Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for an address.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = std::move(value); }
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }
    inline Address& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}
    inline Address& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}
    inline Address& WithAddressId(const char* value) { SetAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a person to receive a Snow device at an address.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Address& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Address& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Address& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the company to receive a Snow device at an address.</p>
     */
    inline const Aws::String& GetCompany() const{ return m_company; }
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }
    inline void SetCompany(const Aws::String& value) { m_companyHasBeenSet = true; m_company = value; }
    inline void SetCompany(Aws::String&& value) { m_companyHasBeenSet = true; m_company = std::move(value); }
    inline void SetCompany(const char* value) { m_companyHasBeenSet = true; m_company.assign(value); }
    inline Address& WithCompany(const Aws::String& value) { SetCompany(value); return *this;}
    inline Address& WithCompany(Aws::String&& value) { SetCompany(std::move(value)); return *this;}
    inline Address& WithCompany(const char* value) { SetCompany(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line in a street address that a Snow device is to be delivered
     * to.</p>
     */
    inline const Aws::String& GetStreet1() const{ return m_street1; }
    inline bool Street1HasBeenSet() const { return m_street1HasBeenSet; }
    inline void SetStreet1(const Aws::String& value) { m_street1HasBeenSet = true; m_street1 = value; }
    inline void SetStreet1(Aws::String&& value) { m_street1HasBeenSet = true; m_street1 = std::move(value); }
    inline void SetStreet1(const char* value) { m_street1HasBeenSet = true; m_street1.assign(value); }
    inline Address& WithStreet1(const Aws::String& value) { SetStreet1(value); return *this;}
    inline Address& WithStreet1(Aws::String&& value) { SetStreet1(std::move(value)); return *this;}
    inline Address& WithStreet1(const char* value) { SetStreet1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second line in a street address that a Snow device is to be delivered
     * to.</p>
     */
    inline const Aws::String& GetStreet2() const{ return m_street2; }
    inline bool Street2HasBeenSet() const { return m_street2HasBeenSet; }
    inline void SetStreet2(const Aws::String& value) { m_street2HasBeenSet = true; m_street2 = value; }
    inline void SetStreet2(Aws::String&& value) { m_street2HasBeenSet = true; m_street2 = std::move(value); }
    inline void SetStreet2(const char* value) { m_street2HasBeenSet = true; m_street2.assign(value); }
    inline Address& WithStreet2(const Aws::String& value) { SetStreet2(value); return *this;}
    inline Address& WithStreet2(Aws::String&& value) { SetStreet2(std::move(value)); return *this;}
    inline Address& WithStreet2(const char* value) { SetStreet2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third line in a street address that a Snow device is to be delivered
     * to.</p>
     */
    inline const Aws::String& GetStreet3() const{ return m_street3; }
    inline bool Street3HasBeenSet() const { return m_street3HasBeenSet; }
    inline void SetStreet3(const Aws::String& value) { m_street3HasBeenSet = true; m_street3 = value; }
    inline void SetStreet3(Aws::String&& value) { m_street3HasBeenSet = true; m_street3 = std::move(value); }
    inline void SetStreet3(const char* value) { m_street3HasBeenSet = true; m_street3.assign(value); }
    inline Address& WithStreet3(const Aws::String& value) { SetStreet3(value); return *this;}
    inline Address& WithStreet3(Aws::String&& value) { SetStreet3(std::move(value)); return *this;}
    inline Address& WithStreet3(const char* value) { SetStreet3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city in an address that a Snow device is to be delivered to.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline Address& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline Address& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline Address& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state or province in an address that a Snow device is to be delivered
     * to.</p>
     */
    inline const Aws::String& GetStateOrProvince() const{ return m_stateOrProvince; }
    inline bool StateOrProvinceHasBeenSet() const { return m_stateOrProvinceHasBeenSet; }
    inline void SetStateOrProvince(const Aws::String& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = value; }
    inline void SetStateOrProvince(Aws::String&& value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince = std::move(value); }
    inline void SetStateOrProvince(const char* value) { m_stateOrProvinceHasBeenSet = true; m_stateOrProvince.assign(value); }
    inline Address& WithStateOrProvince(const Aws::String& value) { SetStateOrProvince(value); return *this;}
    inline Address& WithStateOrProvince(Aws::String&& value) { SetStateOrProvince(std::move(value)); return *this;}
    inline Address& WithStateOrProvince(const char* value) { SetStateOrProvince(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer used and the value is ignored.</p>
     */
    inline const Aws::String& GetPrefectureOrDistrict() const{ return m_prefectureOrDistrict; }
    inline bool PrefectureOrDistrictHasBeenSet() const { return m_prefectureOrDistrictHasBeenSet; }
    inline void SetPrefectureOrDistrict(const Aws::String& value) { m_prefectureOrDistrictHasBeenSet = true; m_prefectureOrDistrict = value; }
    inline void SetPrefectureOrDistrict(Aws::String&& value) { m_prefectureOrDistrictHasBeenSet = true; m_prefectureOrDistrict = std::move(value); }
    inline void SetPrefectureOrDistrict(const char* value) { m_prefectureOrDistrictHasBeenSet = true; m_prefectureOrDistrict.assign(value); }
    inline Address& WithPrefectureOrDistrict(const Aws::String& value) { SetPrefectureOrDistrict(value); return *this;}
    inline Address& WithPrefectureOrDistrict(Aws::String&& value) { SetPrefectureOrDistrict(std::move(value)); return *this;}
    inline Address& WithPrefectureOrDistrict(const char* value) { SetPrefectureOrDistrict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is no longer used and the value is ignored.</p>
     */
    inline const Aws::String& GetLandmark() const{ return m_landmark; }
    inline bool LandmarkHasBeenSet() const { return m_landmarkHasBeenSet; }
    inline void SetLandmark(const Aws::String& value) { m_landmarkHasBeenSet = true; m_landmark = value; }
    inline void SetLandmark(Aws::String&& value) { m_landmarkHasBeenSet = true; m_landmark = std::move(value); }
    inline void SetLandmark(const char* value) { m_landmarkHasBeenSet = true; m_landmark.assign(value); }
    inline Address& WithLandmark(const Aws::String& value) { SetLandmark(value); return *this;}
    inline Address& WithLandmark(Aws::String&& value) { SetLandmark(std::move(value)); return *this;}
    inline Address& WithLandmark(const char* value) { SetLandmark(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country in an address that a Snow device is to be delivered to.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline Address& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline Address& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline Address& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The postal code in an address that a Snow device is to be delivered to.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }
    inline Address& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}
    inline Address& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}
    inline Address& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number associated with an address that a Snow device is to be
     * delivered to.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline Address& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline Address& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline Address& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the address you are creating is a primary address, then set this option to
     * true. This field is not supported in most regions.</p>
     */
    inline bool GetIsRestricted() const{ return m_isRestricted; }
    inline bool IsRestrictedHasBeenSet() const { return m_isRestrictedHasBeenSet; }
    inline void SetIsRestricted(bool value) { m_isRestrictedHasBeenSet = true; m_isRestricted = value; }
    inline Address& WithIsRestricted(bool value) { SetIsRestricted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Differentiates between delivery address and pickup address in the customer
     * account. Provided at job creation.</p>
     */
    inline const AddressType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AddressType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AddressType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Address& WithType(const AddressType& value) { SetType(value); return *this;}
    inline Address& WithType(AddressType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_company;
    bool m_companyHasBeenSet = false;

    Aws::String m_street1;
    bool m_street1HasBeenSet = false;

    Aws::String m_street2;
    bool m_street2HasBeenSet = false;

    Aws::String m_street3;
    bool m_street3HasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_stateOrProvince;
    bool m_stateOrProvinceHasBeenSet = false;

    Aws::String m_prefectureOrDistrict;
    bool m_prefectureOrDistrictHasBeenSet = false;

    Aws::String m_landmark;
    bool m_landmarkHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    bool m_isRestricted;
    bool m_isRestrictedHasBeenSet = false;

    AddressType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
