/*
 * Copyright (C) 2009 Raghavendra Nayak
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// sample to check the possible memory leak.

#include <cstring>

class MyData {
public:
   MyData(const char *buf, int kind);
   ~MyData();
   MyData& operator=(const MyData& a);
private:
   char *m_data;
   int m_kind;
};

MyData::MyData(const char *buf, int kind)
{
   m_kind = kind;
   if (buf) {
      m_data = new char[std::strlen(buf) + 1];
      std::strcpy(m_data, buf);
   } else {
      m_data = new char[1];
      *m_data = '\0';
   }
}

MyData& MyData::operator=(const MyData& a) {
   this->m_kind = a.m_kind;
   // here we leak memory, if we don't check for existing allocations!
   this->m_data =  new char[std::strlen(a.m_data) + 1];
   std::strcpy(this->m_data, a.m_data);
   return *this;
}

MyData::~MyData() {
   delete []m_data;
}

int main(void)
{
   char myName[] = "Raghavendra Nayak";

   MyData obj (myName, 0);
   MyData obj2 (NULL, 0);

   // memory leak of 1 bytes
   obj2 = obj;

   return 0;
}
