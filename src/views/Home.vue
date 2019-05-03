<template>
  <div id="home">
    <h1>iOS Headers</h1>
    <input v-model='selectedHeader'>
    <p>Headers => {{selectedHeader}}</p>
    <button @click="versions()">Fetch all</button>
  </div>
</template>

<script lang="ts">
import Vue from 'vue'
import Component from 'vue-class-component'
import axios, { AxiosResponse, AxiosInstance } from 'axios'


const ax:AxiosInstance = axios.create({
  baseURL: process.env.VUE_APP_API_URL || 'http://localhost/'
})

@Component({ })

export default class Home extends Vue {
  selectedHeader: string = ''

  mounted() {
    console.log(process.env.VUE_APP_API_URL)
  }

  async versions() {
    const res:AxiosResponse = await axios.get(`${process.env.VUE_APP_API_URL}headers/headers.json`)
    console.log(res.data);
  }
}
</script>

